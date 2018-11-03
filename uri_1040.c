#include<stdio.h>
int main(){

    float a,b,c,d,m1,m2,n;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    m1=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    printf("Media: %.1f\n",m1);
    if(m1>=7.0){
        printf("Aluno aprovado.\n");
    }
     else if(m1>=5.0){
        printf("Aluno em exame.\n");
        scanf("%f",&n);
        printf("Nota do exame: %.1f\n",n);
        m2=(m1+n)/2;
        if(m2>=5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",m2);
    }

    else{
        printf("Aluno reprovado.\n");
    }

    return 0;

}
