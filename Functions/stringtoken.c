#include <stdio.h>
#include <string.h>

int main (){
    char str[] = "sahu sujeeth, sahu - sujeeth";
    char *separator = "-, ";
    char *token = strtok(str,separator);
    while (token != NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL, separator);
        
    }
    //free(str);
    
    return 0;
}