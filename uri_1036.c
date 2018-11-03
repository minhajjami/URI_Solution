#include<stdio.h>
#include <math.h>
int main(){

    float A,B,C,R1,R2,part;
    scanf("%f%f%f",&A,&B,&C);
    part=pow(B,2)-4*A*C;
    if((A!=0) && part>0)
       {
           R1=(-B+sqrt(part))/(2*A);
           R2=(-B-sqrt(part))/(2*A);

           printf("R1 = %.5f\n",R1);
           printf("R2 = %.5f\n",R2);
       }
     else{
        printf("Impossivel calcular\n");
     }
    return 0;

}
