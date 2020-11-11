#include <stdio.h> 

#include <stdlib.h> 


int main(int argc,char* argv[])
{
	int pid=fork();
	if(pid==-1)
    {
    	printf("can't fork,error\n");
    	exit(0);
    }
    else
    	if(pid==0)
    	{
           char* args[2]={argv[1],NULL};
           printf("child process\n");
           execv(args[0],args);
           //exit(0);
    	}
}
