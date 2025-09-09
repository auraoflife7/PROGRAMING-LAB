#include<stdio.h>
int main()
{
    int marks,grade;
    printf("your marks :");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100 )
    {
        printf("your grade is A+",grade);
    }
    else if (marks>=80 && marks<=89)
    {
        printf("your grade is A",grade);
    }
    else if (marks>=70 && marks<=79)
    {
        printf("your grade is B+",grade);
    }
    else if (marks>=60 && marks<=69)
    {
        printf("your grade is B",grade);
    }
    else if (marks>=50 && marks<=59)
    {
        printf("your grade is C+",grade);
    }
    else if (marks>=40 && marks<=49)
    {
         printf("your grade is C",grade);
    }
    else{
        printf("your are failed due to low marks",grade);
    }
    return 0;
}