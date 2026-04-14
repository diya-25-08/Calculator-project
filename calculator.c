#include<stdio.h>
#include<stdlib.h>
void Addition()
{    
    int n,a[100],i,result=0;
    printf("How many numbers you want to add: ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Addition is not possible with less than 2 numbers.\n");
        printf("\n-----------------------------");
        printf("\n-----------------------------\n");
        return;
    }
    printf("Enter the numbers one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       result+=a[i];
    }
    printf("The result of ");
    for(i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
        if(i<n-1)
         printf("+");
    }
    printf(" is = %d\n",result); 
    printf("\n-----------------------------");
    printf("\n-----------------------------\n");

}    
void Subtraction()
{
    int n,a[100],i,result;
    printf("How many numbers you want to subtract: ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Subtraction is not possible with less than 2 numbers.\n");
        printf("\n-----------------------------");
        printf("\n-----------------------------\n");
        return;
    }
    printf("Enter the numbers one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    result=a[0];
    for(i=1;i<n;i++)
    {
       result-=a[i];
    }
    printf("The result of ");
    for(i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
        if(i<n-1)
         printf("-");
    }
    printf(" is = %d\n",result); 
    printf("\n-----------------------------");
    printf("\n-----------------------------\n");
}    
void Multiplication()
{
   int n,a[100],i,result=1;
    printf("How many numbers you want to multiply: ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Multiplication is not possible with less than 2 numbers.\n");
        printf("\n-----------------------------");
        printf("\n-----------------------------\n");
        return;
    }
    printf("Enter the numbers one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       result*=a[i];
    }
    printf("The result of ");
    for(i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
        if(i<n-1)
         printf("*");
    }
    printf(" is = %d\n",result); 
    printf("\n-----------------------------");
    printf("\n-----------------------------\n");
}    
void Division()
{
    int n,a[100],i;
    float result;
    printf("How many numbers you want to divide: ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Division is not possible with less than 2 numbers.\n");
        printf("\n-----------------------------");
        printf("\n-----------------------------\n");
        return;
    }
    printf("Enter the numbers one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    result=a[0];
    for(i=1;i<n;i++)
    {  
        if(a[i]==0)
        {
            printf("Division by zero is undefined.\n");
            printf("\n-----------------------------");
            printf("\n-----------------------------");
            return;
        }
        result = result / a[i];
    }
    printf("The result of ");
    for(i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
        if(i<n-1)
         printf("/");
    }
    printf(" is = %.2f\n",result); 
    printf("\n-----------------------------");
    printf("\n-----------------------------");

}
//start from main function
int main()
{
    int ch;
    do
    {  
      printf("\nEnter 1 for Addition.\n"); 
      printf("Enter 3 for Multiplication.\n");
      printf("Enter 2 for Subtraction.\n");
      printf("Enter 4 for Division.\n");
      printf("Enter 5 for Exit.\n");
      printf("-----------------------------\n");
      printf("Enter your choice: ");
      scanf("%d",&ch);

      switch(ch)
      {
        case 1:Addition();
               break;
        case 2:Subtraction();
               break;
        case 3:Multiplication();
               break;
        case 4:Division();
               break;
        case 5:exit(1);
        default:printf("Try again.."); 
                printf("\n-----------------------------");
      }
    }while(1);
    return 0;
}
