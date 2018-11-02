#include <stdio.h>
int main(){

    int n,h;
    double s,ts;
    scanf("%d%d%lf",&n,&h,&s);
    ts=(double)h*s;

    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",ts);

    return 0;
}
