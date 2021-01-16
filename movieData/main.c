#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include "defs.h"


int main() {  

	//Create the instances of the namesOfTHeLists
	ListType calvinMovies; 
	ListType hobbesMovies; 
	
	//Set the Head and Tails to null and give the ID a starting value
	calvinMovies.head = NULL;  
	calvinMovies.tail = NULL;  
	calvinMovies.nextID = 1000;  
	
	hobbesMovies.head = NULL;  
	hobbesMovies.tail = NULL; 
	hobbesMovies.nextID = 2001; 
	
	//Pass in the address of the initallMovies of calvin and hobbes  
	//Then print each list front and back including the head and tails 
	initAllMovies(&calvinMovies,&hobbesMovies);     
	printf(" Calvins Movies \n"); 
	printListFor(&calvinMovies);  
	printListBack(&calvinMovies);  
	HeadandList(&calvinMovies);

	  
	printf(" Hobbes Movies \n"); 
	printListFor(&hobbesMovies);  
	printListBack(&hobbesMovies); 
	HeadandList(&hobbesMovies); 
	 	
	
	printf("\n");  
	
	//Created two instances of the title and the year from the array and gave each one a value and set the element to null 
	ArrayType arrayByTitle; 
	arrayByTitle.s = 0; 
	arrayByTitle.elem = NULL;  
	
	ArrayType arrayByYear; 
	arrayByYear.s = 0; 
	arrayByYear.elem = NULL;   

	printf("Processing... \n");  
	
	//Send the values to merge of either title or arraybyTitle, also send the both list addresses 
	mergeMovies(BY_TITLE, &arrayByTitle,&calvinMovies ,&hobbesMovies);  
	mergeMovies(BY_YEAR, &arrayByYear,&calvinMovies,&hobbesMovies);     
	
	printf(" Calvins Movies \n"); 
	printListFor(&calvinMovies);  
	printListBack(&calvinMovies);   
	
	printf(" Hobbes Movies \n"); 
	printListFor(&hobbesMovies);  
	printListBack(&hobbesMovies);  
	
	printf("\n\n");  
	
	//Printed the merge of the array and the Title 
	printf("All Movies By Title \n"); 
	printArray(&arrayByTitle);  
	
	printf("\n");  
	printf("All Movies By Year \n"); 
	printArray(&arrayByYear); 
	
	cleanup(&arrayByTitle); 
	
	
	
	
}   

//THe clean method helps free space in that was stored in arrayByTitle 
void cleanup(ArrayType *arr)
{
  for (int i=0; i<arr->s; ++i) {
    free(arr->elem[i]);
  }

  free(arr->elem);

  arr->elem = NULL;
  arr->s = 0;
}

void initMovie(char *t, int y, MovieType **m)  { 

	//Need to dynamically allocated into the heap and a new movie needs to be created and then copy whats passed into to the title and year into moveitype fields  
	//Lastly return the point of movietype 
	MovieType *new_m = calloc(1,sizeof(MovieType)); 
	strcpy((new_m)->mov_title, t);  
	(new_m)->movYear = y;  
	
	(*m) = new_m; 
	
} 

