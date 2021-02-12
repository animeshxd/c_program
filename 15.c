//15. Write a program to take a character and check if the character is vowel or consonant.
#include <stdio.h>
main()
{
  
  char x;
  printf("Enter the charecter: ");
  scanf("%c",&x);
  if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    printf("%c is vowel",x);
  else if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    printf("%c is vowel",x);
  else
    printf("%c is consonant",x);
}