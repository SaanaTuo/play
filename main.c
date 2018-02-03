#include <stdio.h>
#include "source.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main() {
  clock_t begin = clock(); //start time

  char *stringit;
  int x=5;
  int *ptr_to_x;

  ptr_to_x=&x;

  stringit=(char*)malloc(50*sizeof(char));

  printf("Global variable x is located at @%p\n",&x);
  printf("Pointer to x is at adress @%p\n", &ptr_to_x);
  printf("And it's value is @%p\n", ptr_to_x);
  printf("Allocated space for a string to adress @%p\n",stringit);

  if (stringit==NULL) fprintf(stderr,"error\n");  //possible errors.
  strcpy(stringit,"I'm really f**ing bored");

  print_x_times(stringit,x);

  cat();

  free(stringit);

  clock_t end = clock();  //end time
  double time_spent =(double)(end - begin) / CLOCKS_PER_SEC; //time it took
  printf("This program took %f seconds to run\n",time_spent);


  return 0;
}
