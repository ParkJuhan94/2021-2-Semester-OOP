#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
//#include <unistd.h>


int main() {
    int filedes;
    char fname[] = "afile";

    if ((filedes = open(fname, O_RDWR)) == -1) {
        printf("%s cannot be opened.\n", fname);
    }
    close(filedes);
    return 0;
}