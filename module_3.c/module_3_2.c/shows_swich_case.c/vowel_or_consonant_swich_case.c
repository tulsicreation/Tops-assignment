// Vowel or Consonant using switch case

#include<stdio.h>
int main()
{
    char alphabet;

    printf("Enter any alphabat :");
    scanf("%c",&alphabet);

    switch(alphabet)
    {
       case 'A':
       {
          printf("vowel");
          break;
       }
       case 'E' :
       {
          printf("vowel");

       }
       case 'I':
       {
          printf("vowel");
          break;
       }
       case 'O':
       {
          printf("vowel");
          break;
       }
       case 'U':
       {
          printf("vowel");
          break;
       }  
      default:
      {  
         printf("Consonsol");
         break;
      }
 
    }    
     
}