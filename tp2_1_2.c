#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20 

int main(){

int i;
double vt[N];
double *pn;
pn=(double*)vt;

srand((int)time(NULL));

for(i=0;i < N ; i++){
    *(pn + i)= 1 + rand()% 100 ;
    printf("%.1f ", *(pn + i) );
}

    return 0; 
}