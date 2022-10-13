#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	// ZOMBIE PROCESS
	int p =fork();
	if(p!=0){
	    printf("parent process exited\n");
	    sleep(10);
	}
	else{
	printf("Zombie process\n");
	printf("child procces is still running \n ");
        exit(0);
	}
	
	//ORPHAN PROCESS
	// Create a child process      
       int pid = fork();
  
       if (pid > 0)
       {
        printf("in parent process");
	 exit(0);     
       }
  
        // Note that pid is 0 in child process
       // and negative if fork() fails
    else if (pid == 0)
    {
        sleep(30);
        printf("in child process");
    }
  
    return 0;
}

