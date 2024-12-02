/**
 * Implement c programs that uses bit fields. 
 */
#include <stdio.h>
struct flags{
    unsigned int isCompleted: 1;
    unsigned int isProcessed: 5;
    unsigned int isEnabled: 2;
};
void main(){
    struct flags f;
    f.isCompleted = 1;
    printf("%d", f.isCompleted);
    f.isEnabled = 1;
    printf("%d", f.isEnabled);
}