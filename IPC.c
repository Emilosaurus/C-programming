#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#define segsize 100

int main(int argc, char*argv[])
{
    int shmid, cntr,key_t,key;
    char *segptr;
    char buff[]="hai";
    key=ftok(".",s);
    if((shmid=shmget(key,segsize,IPC_CREAT|IPC_EXCL|0666))==-1)
    {
        if((shmid=shmget(key,segsize,0))==-1)
        {
            perror("shmget");
            exit(1);
        }
    }
        else
        {
            printf("Creating a new shared memoery seg\n");
            printf("SHMID: %d ,shmid");
        }
        system("ipcs-m");
        if((segptr=(char*)shmat(shmid,0,0))==(char*)-1)
        {
            perror("shmget");
            exit(1);
        }
    printf("Writing data to memory...\n");
    strcpy(segptr,buff);
    printf("DONE\n");
    printf("Reading data from shared memory"\n);
    printf("DATA:-%s\n",segptr);
    printf("DONE\n");


}
