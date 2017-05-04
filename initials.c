#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//(void) program does not take any comadnd line arguments
int main(void)
{
    // gets the user´s name
    string name = GetString();
       // prints the first initial (in caps) that appears after the first space(s)
  
       if(name[0] != ' ')
        {
            printf("%c", toupper(name[0]));
        }
    
    
    /* cycles through all the characters and prints only those following a space
       as long as it falls before the end of the string
    */
    int n = strlen(name);
    for(int i = 0; i <= n; i++)
    {
        
        if(name[i] == ' ' && name[i + 1] != ' ' && i + 1 < n)
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
} 