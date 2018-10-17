#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
//code is to add 10 processes using threads
int data_set[1000];

int chunk_size = 200;

void *
Add (void *arg) 
{
  
int start = (int) arg;
  
int end = start + chunk_size;
  
int sum = 0;
  
int i = 0;
  
for (i = 0; i < end; i++)
    
    {
      
sum = sum + data_set[i];
    
}
  
return ((void *) sum);

 
} 


int main ()
{
  
int status_t1, status_t2, status_t3, status_t4, status_t5, status_t6,
    status_t7, status_t8, status_t9, status_t10;
  
pthread_t pthread_t1, pthread_t2, pthread_t3, pthread_t4, pthread_t5,pthread_t6, pthread_t7,pthread_t8,pthread_t9,pthread_t10, thre$;
  
int i;
  
for (i = 0; i < 1000; i++)
    {
      
data_set[i] = i;
    
}
  
pthread_create (&pthread_t1, NULL, Add, (void *) (0 * chunk_size));
  
pthread_create (&pthread_t2, NULL, Add, (void *) (1 * chunk_size));
  
pthread_create (&pthread_t3, NULL, Add, (void *) (2 * chunk_size));
  
pthread_create (&pthread_t4, NULL, Add, (void *) (3 * chunk_size));
  
pthread_create (&pthread_t5, NULL, Add, (void *) (4 * chunk_size));
  pthread_create (&pthread_t6, NULL, Add, (void *) (5 * chunk_size));
  pthread_create (&pthread_t7, NULL, Add, (void *) (6 * chunk_size));
 pthread_create (&pthread_t8, NULL, Add, (void *) (7 * chunk_size));
 pthread_create (&pthread_t9, NULL, Add, (void *) (8 * chunk_size));
 pthread_create (&pthread_t10, NULL, Add, (void *) (9 * chunk_size));
    //join
    pthread_join (pthread_t1, (void **) &status_t1);
  
pthread_join (pthread_t2, (void **) &status_t2);
  
pthread_join (pthread_t3, (void **) &status_t3);
  
pthread_join (pthread_t4, (void **) &status_t4);
  
pthread_join (pthread_t5, (void **) &status_t5);
pthread_join (pthread_t6, (void **) &status_t6);
pthread_join (pthread_t7, (void **) &status_t7);
pthread_join (pthread_t8, (void **) &status_t8);
pthread_join (pthread_t9, (void **) &status_t9);
pthread_join (pthread_t10, (void **) &status_t10);
  
 
 
printf ("\nValue returned By Thread'1' %d\n", status_t1);
  
printf ("\nValue returned By Thread'2' %d\n", status_t2);
  
printf ("\nValue returned By Thread'3' %d\n", status_t3);
  
printf ("\nValue returned By Thread'4' %d\n", status_t4);
  
printf ("\nValue returned By Thread'5' %d\n", status_t5);
  printf ("\nValue returned By Thread'6' %d\n", status_t6);
  printf ("\nValue returned By Thread'7' %d\n", status_t7);
  printf ("\nValue returned By Thread'8'%d\n", status_t8);
  printf ("\nValue returned By Thread'9'%d\n", status_t9);
  printf ("\nValue returned By Thread'10'%d\n", status_t10);
  
 
    //int ADDSUM;
    //ADDSUM                = status_t1+status_t2+status_t3+status_t4+status_t5;
    //              printf(ADDSUM);

 
}
