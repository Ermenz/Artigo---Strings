/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Olá mundo!";
    char *substr = strstr(str, "mundo");
    
    if(substr != NULL) {
        printf("Substring encontrada %s \n", substr);
    } else {
        printf("Substring não encontrada \n");
    }
    
    
    return 0;
}
