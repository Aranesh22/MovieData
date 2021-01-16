#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include "defs.h"

//THe header and the tail of both lists are being printed 
void printHL(const MovieType *movP, int i) {  

	if(i ==1) { 
	
		printf("***HEAD-- %10d, Title:  %25s, Year: %d\n", movP->ID, movP->mov_title,movP->movYear);
	
	
	} 
	 
	else{ 
	
		printf("***TAIL-- %10d, Title:  %25s, Year: %d\n", movP->ID, movP->mov_title,movP->movYear);
	
	}
	
} 

//In this method the data is being retrieved from the lists to be passed into the print of HL 
void HeadandList(ListType* list) { 
	
	
	NodeType *currNode = list->head;   
	NodeType *tailNode = list->tail; 
	printHL(currNode->data, 1); 
	printHL(tailNode->data,2);

}  

//THe merged array data is being passed into the printMov
void printArray(ArrayType *arr)
{
  for (int i=0; i<arr->s; ++i)
    printMov(arr->elem[i]); 
    
} 

//THe data for the list is being passed in to a print function for a forward print 

void printListFor(ListType *list)
{
	NodeType *currNode = list->head;
  	NodeType *prevNode = NULL;

  	printf("LIST FORWARD:\n");
 	while (currNode != NULL) {
   		printMov(currNode->data);
    		prevNode = currNode;
    		currNode = currNode->next;
  	} 
  
}    

//THe data for the list is being passed in to a print function for a backwards print  
void printListBack(ListType *list) { 

	NodeType *currNode = list->head;
  	NodeType *prevNode = NULL; 
  	
  	while (currNode != NULL) {
    		prevNode = currNode;
    		currNode = currNode->next;
  	} 

  	currNode = prevNode;

  	printf("LIST BACKWARD:\n");
  	while (currNode != NULL) {
    		printMov(currNode->data);
    		currNode = currNode->prev;
  	}

}

//THe movie content printed in the function for all the scenarios it set for head and tail 
void printMov(const MovieType *movP) { 
  printf("-- %10d, Title:  %25s, Year: %d\n",
          movP->ID, movP->mov_title,movP->movYear); 
          
}
