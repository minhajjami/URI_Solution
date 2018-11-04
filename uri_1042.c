#include <stdio.h>
int main(){

    int a[3],b[3],i,j,temp;
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++){
        a[i]=b[i];
    }
    for(i=0;i<2;i++){
        for(j=1;j<3;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++){

        printf("%d\n",a[i]);
    }

    printf("\n");
    for(i=0;i<3;i++){

        printf("%d\n",b[i]);
    }
    return 0;
}
