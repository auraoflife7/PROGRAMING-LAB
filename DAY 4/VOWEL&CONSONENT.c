#include<stdio.h>
int main()
{
    char ch;
    printf("Enter  any character between a to z : ");
    scanf("%c",&ch);
        if(ch=='a'||ch=='A')
         printf("%c is vowel",ch);
        else if(ch=='e'||ch=='E')
          printf("%c  is vowel",ch);
        else if(ch=='i'||ch=='I')
          printf("%c  is vowel",ch);
        else if(ch=='o'||ch=='O')
          printf("%c  is vowel",ch);
        else if(ch=='u'||ch=='U')
          printf("%c  is vowel",ch);                               
        else
         printf("%c  is consonant",ch);
  return 0;
}