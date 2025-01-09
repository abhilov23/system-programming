#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){
    
    //using system call:
    //function prototype: ssize_t write(int fd, const void buf[.count], size_t count);
    // fd : file descriptor
    // buf : pointer to the buffer containing the data to be written
    // count : the number of bytes to be written
    write(STDOUT_FILENO, "hello world!\n",strlen("hello world!\n"));
    return 0;
}