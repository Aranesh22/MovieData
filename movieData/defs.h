#ifndef DEFS_H 
#define DEFS_H
/* 
THIS HEADER FILE CONTAINS THE FOUR  MAIN STRUCTS. ONE TO HOLD THE VALUES OF THE MOVIES, ANOTHER STRUCT 
TO HOLD THE A POINT THAT POINTS TO MOVIETYPE AS WELL HOLDS THE NODES OF PREVIOUS AND NEXT. THE LIST TYPE STRCT ARE POINTERS 
THAT HOLD THE HEAD AND TAIL OF NODETYPE AND THE NEXTID ITERATION. THE LAST STUCT OF ARRAYTPE HOLDS THE SIZE AND ALL THE ELEMENTS 
OF A COMBINED ARRAY. THE ENUM sortype holds bytitle and by_year which is used to identify what to sort through out the program. 
*/
typedef struct { 
 
	int movYear; 
  	char mov_title[32]; 
  	int ID;  
  	  
}MovieType;  

typedef struct Node { 

	MovieType *data;
  	struct Node *prev;
  	struct Node *next; 
  	
}NodeType;  

typedef struct List{ 

 	NodeType *head;
  	NodeType *tail;
  	int nextID;
}ListType; 

typedef struct  { 
	
	int s; 
  	MovieType **elem; 
 
} ArrayType;   

typedef enum {  
 
 	BY_TITLE, 
 	BY_YEAR 

}SortType;  

void initMovie(char*, int, MovieType**); 
void addMovieToList(SortType, ListType *, MovieType *);  
void printListFor(ListType*);   
void printListBack(ListType*); 
void HeadandList(ListType* list);
void printHL(const MovieType *, int);
void printMov(const MovieType *);  
void initAllMovies(ListType *, ListType *);  
void mergeMovies(SortType, ArrayType *, ListType *,ListType *);
void printArray(ArrayType *);   
void cleanup(ArrayType *);  


#endif





