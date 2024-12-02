/**
 * Implement c programs that uses self-referential structures 
 */
#include <stdio.h>
struct node{    
    int value;
    struct node *next; //self referential structure
};

void main(){
    struct node n1, n2, n3;
    n1.value = 10;
    n1.next = &n2;
    n2.value = 40;
    n2.next = &n3;
    n3.value = 60;
    n3.next = NULL; 

    struct node *current = &n1;
    while(current != NULL){
        printf("Value: %d, Next: %p\n", current->value, current->next);
        current = current->next;
    }       
}