#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20 

int main(){
    
    int i;
    double vt[N];
    srand(time(NULL));
    

    for(i = 0 ; i < N ; i++){
<<<<<<< HEAD
        vt[i] = 1 + rand() % 100;
        printf ("%.1f    " , vt[i]);
=======
        vt[i] = 1 + rand()% 100 ;
        printf ("%d  " , vt[i]);
>>>>>>> Opcion_2
       
    }

return 0;
}