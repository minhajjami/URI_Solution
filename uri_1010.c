#include <stdio.h>
int main(){

    int n1,u1,n2,u2;
    double s1,s2,tot;
    scanf("%d%d%lf",&n1,&u1,&s1);
    scanf("%d%d%lf",&n2,&u2,&s2);
    tot=u1*s1+u2*s2;
    printf("VALOR A PAGER: R$ %.2lf\n",tot);

    return 0;

}
