#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#define PERMS 0644

char *filename = "truncfile";

int main() {
  int filedes;

  if((filedes = open(filename, O_WRONLY|O_TRUNC, PERMS)) == -1){
    printf("Couldn't create %s\n", filename);
    exit(1);
  }

  printf("Create %s\n", filename);
  exit(0);
}
