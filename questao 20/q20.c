/*#include "gc.h"
#include <assert.h>
#include <stdio.h>
#include <time.h>

int main()
{
  int i;
clock_t t;
t = clock();

  GC_INIT();	
  for (i = 0; i < 10000000; ++i)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     if (i % 100000 == 0)
       printf("Heap size = %d\n", GC_get_heap_size());
   }
t = clock() - t;
printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
printf("\n\n");
  return 0;
}


//*/////////////////////////////////
#include <assert.h>
#include <stdio.h>
#include <time.h>

int main()
{
  int i;
clock_t t;
t = clock();

  GC_INIT();	
  for (i = 0; i < 10000000; ++i)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     free(q);
     free(p);
     if (i % 100000 == 0)
       printf("Heap size = %d\n", GC_get_heap_size());
   }
t = clock() - t;
printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
printf("\n\n");
  return 0;
}