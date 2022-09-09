#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  int a ;
  printf("Enter the size of tha array  : ");
  scanf("%d" , &a);
  int arr[a];
  printf("Enter values of array below: \n");
  for(int i = 0 ; i < a ;i++)
     scanf("%d" , &arr[i]);
  int p = fork();
  
  if(p <0)
  {
     printf("Error occured \n");
     exit(1) ;
  }
   else if(p == 0)
   {
     printf("\nI am child and i will print odd values : ");
     for(int i = 0 ; i < a; i++)
         if(arr[i]%2 == 1)
            printf("%d ",arr[i]);
   }
   
    else
    {
          printf("\nI am parent and i will print even values : ");
          for(int i = 0 ; i < a; i++)
            if(arr[i]%2 == 0)
             printf("%d ",arr[i]);
   
    }
    
     
  //printf("hello world %d\n",getpid());
  return 0;
}

