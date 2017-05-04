#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{   
  //get the key from the user

    //check if the number of arguments is equal to 2, if not return 1 (mistake) and print instruction
    if (argc != 2) 
    {
      printf("Usage: caesar key\n");
      return 1;
    }
    
   // convert the string given on the command line to a int
   int k = atoi(argv[1]);
   
   // Assume that it will be a non-negative integer i.e. Key must be a non-negative integer
   //Do not assume that key will be less than or equal to 26. i.e it can be greater than 26; int can overflow
   if (k <= 0) {
    
       printf("Key must be a non-negative integer");
       return 1;
   }
   
  //get the plaintext from the user
   printf("plaintext: ");
   string plaintext = GetString();

   if (plaintext != NULL);
   {
    
      //iterate over the characters in a string
         // if alphabetic  
              //preserve case  
             //encrypt the plaintext with the k  ciphertext i=(plaintext i +k)mod26
               //uppercase character
                 for (int i = 0, n = strlen(plaintext); i < n; i++) //add + key to each 
                 {
                    if (isupper(plaintext[i]))
                    { 
                   //uppercase
                     plaintext[i] = (plaintext[i] - 'A'  + k) % 26 + 'A';
                 
                    }
                    
                    else if (islower(plaintext[i]))
                    { 
                   //uppercase
                     plaintext[i] = (plaintext[i] - 'a'  + k) % 26 + 'a';
                 
                    }
                  
                   //lowercase character
                  
                  
                 }
                 
                 
   }
   
      printf("ciphertext: %s\n", plaintext); 
  
 
 return 0;
    
} 
