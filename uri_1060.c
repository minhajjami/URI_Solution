#include <stdio.h>
int main()
{

    double arr[6];
    int i,c=0;
    for(i=0;i<6;i++){
        scanf("%lf",&arr[i]);
    }
    for(i=0;i<6;i++){
        if(arr[i]>0)
        {
            c++;
        }
    }
    printf("%d valores positivos\n",c);

    return 0;

}
