#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylist.h"

/* The head and tail of the linked list. */
struct node_t* head = NULL;
struct node_t* tail = NULL;

void insert(char* str)
{
    //create a new node for the string
    struct node_t* new_t = (struct node_t*)malloc(sizeof(struct node_t)); 

    new_t -> next = NULL; //initialize the pointers
    new_t -> prev = NULL;

    strcpy(new_t -> str, str); // copy string

    if(head == NULL){ // if it is null this is the first insertion

        head = new_t;
        tail = new_t;
        
    } else {

        struct node_t *tmp = head;
        struct node_t *current = NULL;
        int duplicate = 1; // this will determine if we have a duplicate

        while(tmp != NULL) {

            if(strcmp(tmp -> str, new_t -> str) > 0){ // increasing order
                break; 
            }
            if(strcmp(tmp -> str, new_t -> str) == 0){ // if we have a duplicate 
                tmp -> count++; // increment count
                duplicate = 0; // we have a duplicate so we wont add this to the list 
                break;
            }

            current = tmp; // assigning tmp to current to traverse the linked list
            tmp = tmp -> next;
            
        }
        
        if(duplicate == 1){ // if no duplicates continue with insertion
        
            if(tmp == NULL) {   //this means insertion will be at the end 
            
                current -> next = new_t;
                new_t -> prev = current;
                tail = new_t;

            } else if(current == NULL) {  //this null means the insertion will be at the head
            
                new_t -> next = tmp;
                tmp -> prev = new_t;
                head = new_t;
            
            } else { // normal insertion at an increasing order 

                current -> next = new_t;
                tmp -> prev = new_t;
                new_t -> prev = current;
                new_t -> next = tmp;
            
            }
        }
        
    }

    //increment the node's count
    new_t -> count++;

}


void rev_list()
{

    struct node_t* tmp = tail;

    while(tmp != NULL) { 
        
        // this is to remove the /n done by fget() function in main to have a proper print that aligns with the 
        // example in the assignment instructions
        size_t length = strlen(tmp->str);
        if((length > 0) && (tmp->str[length-1] == '\n'))
        {
            tmp->str[length-1] ='\0';
        }
        
        // if the count is greater than one to show that it appears twice
        if(tmp->count > 1){
            printf("%s [%d]\n",tmp -> str, tmp -> count);
        }else{
            printf("%s \n", tmp->str);
        }
        
        tmp = tmp -> prev;
    }


}
