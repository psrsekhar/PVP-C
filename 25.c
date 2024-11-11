/**
 * Write a C program to find the number of vowels, consonants, digits, and white spaces in a string.
 */
#include <stdio.h>
#include <ctype.h>
void main(){
    int vowels = 0, consonants = 0, digits = 0, whiteSpaces = 0;
    char message[] = "Hi  H0w are y0u";
    for(int i = 0; message[i] != '\0'; i++){
        message[i] = tolower(message[i]);
        if(message[i] >= 'a' && message[i] <= 'z'){
            if(message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u'){
                vowels++;
            } else{
                consonants++;
            }             
        }
        else if(isdigit(message[i])){
            digits++;
        }
        else if(isspace(message[i])){
            whiteSpaces++;
        }
    }
    printf("Vowels : %d\tConsonants: %d\tDigits: %d\tWhite spaces: %d", vowels, consonants, digits, whiteSpaces);
}