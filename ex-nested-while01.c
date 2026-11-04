#include <stdio.h> 
 
int main() 
{ 
    int i = 1; 
    int j; 
 
    while(i <= 3) { 
        j = 1; 
 
        while(j <= 3) { 
            printf("i = %d, j = %d\n", i, j); 
            j++; 
        } 
 
        i++; 
    } 
    return 0; 
} 
