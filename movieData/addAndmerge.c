#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include "defs.h"


void addMovieToList(SortType s, ListType *list, MovieType *m) { 
	
	//Create the nodes for the current,prev and new 
	NodeType *currNode;
	NodeType *prevNode;
  	NodeType *newNode; 
  
  	//Providing an ID to the new movie and then the LIST nextId is incremented 
  	m->ID = list->nextID; 
  	++(list->nextID);   
  	
  	//THe current Node is set to the list head and prevNOde is set to null 
  	currNode = list->head;
        prevNode = NULL; 
        
  	//Check if the currNOde is not null 
  	while(currNode != NULL) { 
  	
  	
  		//THe two if statmentes check if the year or title of the prev is greater and if so break and start swapping out side of the while 
  		if(s == BY_YEAR && currNode->data->movYear>m->movYear) { 
    		
    			break;
    		
    		} 
    		
  		if(strcmp(currNode->data->mov_title,m->mov_title)>0){
      			break;
    		}  
    		
    		
    		prevNode = currNode;
    		currNode = currNode->next;
  	
  	}   
  	
  	//Dynamically allocate the newNOde and then initalize all the new fields 
  	newNode = malloc(sizeof(NodeType));
  	newNode->data = m;
  	newNode->prev = NULL;
 	newNode->next = NULL;
  	
  	//If the prevNOde is equal to null set the head of the list to the newNODE AND IF not set set whats next to the prev node to the new node 
  	if(prevNode == NULL){ 

        	list->head = newNode;
  	}
 	else{
        	prevNode->next = newNode;
  	} 
  	
  	//Set the new Node next to the currentNode and set the prev node of the new node to prevnode though if the current node is equal to null the prevnode is the current node 
 	newNode->next = currNode;
  	newNode->prev = prevNode; 
  	
  	if(currNode!=NULL){
    		currNode->prev = newNode;
  	} 
  	
  	while(currNode!=NULL) { 

		prevNode = currNode;
    		currNode = currNode->next; 
	
 	} 
 
 	//Once traversing to the entire list set the tail to previous node 
 	list->tail = prevNode;  
 	 	  	
}  

void mergeMovies(SortType s, ArrayType *arr, ListType *list1,ListType *list2) { 

	//Set the nodetypes 
	NodeType *currNode = list1->head;
  	NodeType *prevNode = NULL;  
  	
  	
  	while(currNode!=NULL) { 
  	
  		int pos,index; 
  		
  		//Need to dynamically allocate the movie array to store the elements 
  		MovieType **mov_array = calloc(arr->s+1,sizeof(MovieType*));   
  		
  		for(pos =0; pos < arr->s;++pos) { 
  			
  			//Loop to the array that is passed in  and store the title and year of the current node is some holders 
  			char temp_t[32];   
  			strcpy(temp_t,currNode->data->mov_title); 
  			int cur_year = currNode->data->movYear; 
  			
  			//THe two if statmentes check if the year or title of the prev is greater and if so break and start swapping out side of the while 
  			if(s== BY_TITLE && strcmp(arr->elem[pos]->mov_title,temp_t) > 0) { 
  				break; 
  			
  			} 
  			
  			if(s == BY_YEAR && arr->elem[pos]->movYear > cur_year) {  
  				break; 
  			
  			} 
  		
  		} 
  		
  		//Error checking if the position is invalid 
  		if (pos < 0 || pos > arr->s) {
    			printf("INVALID POSITION");
  		} 
  		
  		//Add the array elements to the mov array 
  		for (index=0; index<pos; ++index) {
    			mov_array[index] = arr->elem[index];
  		} 
  		
  		//Set the last index of the mov array to the current node data 
  		mov_array[index] = currNode->data; 
  		
  		//loop through the array from the starting index of where it breaked off the from the position and add the values to movie array 
  		for (; index< arr->s; ++index) {
    			mov_array[index+1] = arr->elem[index]; 
    		} 
    		
    		//Free whats is being stored in arr so that a seg fault doesnt happen and set the prevnode to the currentnode and the current node to the current node to next 
    		free(arr->elem);
  		++(arr->s); 
  		arr->elem = mov_array; 
  		
  		prevNode = currNode;
    		currNode = currNode->next;
    		
  	}  
  	
  	//It is exactly the same code as above byt the currNode is equal to List2Head now so now the contents ia being added to thisbig list 
  	currNode = list2->head; 
  	prevNode = NULL;  
  	
  	while(currNode!=NULL) { 
  	
  		int pos,index; 
  		
  		MovieType **mov_array = calloc(arr->s+1,sizeof(MovieType*));   
  		
  		for(pos =0; pos < arr->s;++pos) { 
  			
  			char temp_t[32]; 
  			strcpy(temp_t,currNode->data->mov_title); 
  			int cur_year = currNode->data->movYear;
  			if(s== BY_TITLE && strcmp(arr->elem[pos]->mov_title,temp_t) > 0) { 
  				break; 
  			
  			} 
  			
  			if(s == BY_YEAR && arr->elem[pos]->movYear > cur_year) {  
  				break; 
  			
  			} 
  		
  		} 
  		
  		if (pos < 0 || pos > arr->s) {
    			return;
  		} 
  		
  		for (index=0; index<pos; ++index) {
    			mov_array[index] = arr->elem[index];
  		} 
  		
  		mov_array[index] = currNode->data; 
  		
  		for (; index< arr->s; ++index) {
    			mov_array[index+1] = arr->elem[index]; 
    		} 
    		
    		free(arr->elem);
  		++(arr->s); 
  		arr->elem = mov_array; 
  		
  		prevNode = currNode;
    		currNode = currNode->next;
    		
  	}  
  		
  	
  	
 } 
