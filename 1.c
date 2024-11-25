#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
 pid_t pid;
 int status;
 // Fork a child process
 pid = fork();
 if (pid < 0) 
 {
 fprintf(stderr, "Fork Failed\n");
 return 1;
 } 
 else if (pid == 0) 
 {
 printf("This is the child process with pid = %d\n", getpid());
 
 execl("/bin/ls", "ls", NULL);
 perror("execl failed");
 _exit(1); 
 } 
 else 
 {
 printf("Parent process, PID = %u\n", getpid());
 waitpid(pid, &status, 0);
 printf("Child completed with pid = %d\n", pid);
 }
 return 0;
 }
