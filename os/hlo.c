#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  int p = fork();
  
  if(p <0)
  {
     printf("Error occured \n");
     exit(1) ;
  }
   else if(p == 0)
   {
        printf("Child is formed %d\n: ",getpid());
        printf("child is : %d\n" , p);
   }
   
    else
    {
        printf("Parent is formed %d\n",getpid());
        printf("parent is : %d\n", p);
    }
    
     
  //printf("hello world %d\n",getpid());
  return 0;
}

