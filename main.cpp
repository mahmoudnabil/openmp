#include <omp.h>
#include <stdio.h>

int main(void)
{
    //int a[100000];
 
    
    int sum=0;
    #pragma omp parallel for
    for (int i = 0; i < 10000; i++)
       sum += 1;
 	
    printf("%d\n",sum);
    return 0;
}
