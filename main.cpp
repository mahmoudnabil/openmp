#include <omp.h>
#include <stdio.h>
#include <stdlib.h>  
#include <ctime>
#include <sys/resource.h>

#define size 500000000
int main(void)
{

    int a[size];
    int b[size];
    int c[size];
    //Generating a,b
    #pragma omp parallel for
    for (unsigned int i = 0; i < size; i += 1)
    {
	int id = 3;//omp_get_thread_num();
    	a[i] = (id*i)%7;
	b[i] = (id*i)%13;
    }

    
   
    #pragma omp parallel for
    for (int i = 0; i < size; i++)
       c[i] = a[i]+b[i];

	

    return 0;
}
