#include<stdio.h>
#include<stdlib.h>
//Functions for addition
void Addition()
{    
    int n,a[100],i,result=0;
    //Asking number of inputs
    printf("How many numbers you want to add: ");
    scanf("%d",&n);
    //Check valid numbers of inputs
    if(n<2)
    {
        printf("Addition is not possible with less than 2 numbers.\n");
        printf("\n-----------------------------");
        printf("\n-----------------------------\n");
        return;
    }
    //taking input elements
    printf("Enter the numbers one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //adding sum
    for(i=0;i<n;i++)
    {
       result+=a[i];
    }
    //here we print the result
    printf("The result of ");
    for(i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
        if(i<n-1)
         printf("+"); //print + except last
    }
    //final result
    printf(" is = %d\n",result); 
    printf("\n-----------------------------");
    printf("\n-----------------------------\n");

}    
//Funtion for subtraction
void Subtraction()
{
    int n,a[100],i,result;
    //Asking numbers of inputs
    printf("How many numbers you want to subtract: ");
    scanf("%d",&n);
    //Check valid numbers of inputs
    if(n<2)
    {
        printf("Subtraction is not possible with less than 2 numbers.\n");
        printf("\n-----------------------------");
        printf("\n-----------------------------\n");
        return;
    }
    //Taking inputs elements
    printf("Enter the numbers one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //initialize first number
    result=a[0];
    //subtract remaining numbers
    for(i=1;i<n;i++)
    {
       result-=a[i];
    }
    // printing expression
    printf("The result of ");
    for(i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
        if(i<n-1)
         printf("-"); // print - except last
    }
    //final result
    printf(" is = %d\n",result); 
    printf("\n-----------------------------");
    printf("\n-----------------------------\n");
} 
//Function for multiplication 
void Multiplication()
{
   int n,a[100],i,result=1;
    //Asking numbers of elements
    printf("How many numbers you want to multiply: ");
    scanf("%d",&n);
    //Check valid numbers of input
    if(n<2)
    {
        printf("Multiplication is not possible with less than 2 numbers.\n");
        printf("\n-----------------------------");
        printf("\n-----------------------------\n");
        return;
    }
    //taking the elements
    printf("Enter the numbers one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // Multiply the numbers
    for(i=0;i<n;i++)
    {
       result*=a[i];
    }
    // printing expression
    printf("The result of ");
    for(i=0;i<n;i++)
    {
        printf(" %d ", a[i]);
        if(i<n-1)
         printf("*"); //print * except last
    }
    //Final result
    printf(" is = %d\n",result); 
    printf("\n-----------------------------");
    printf("\n-----------------------------\n");
}    
void Division()
{
    int n,a[100],i;
    float result;
    //input values
    printf("How many numbers you want to divide: ");
    scanf("%d",&n);
    //validate input values
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
    //assign first element
    result=a[0];
    for(i=1;i<n;i++)
    {  
        //check division by 0
        if(a[i]==0) 
        {
            printf("Division by zero is undefined.\n");
            printf("\n-----------------------------");
            printf("\n-----------------------------");
            return;
        }
        result = result / a[i];
    }
    //print expression
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
//starting of main function
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
