#include <stdio.h>
int main (){
    printf("continue example.\n");
    for(int i=1;i<=20;i++){
        if(i%2==0)continue;
        printf("%d\n",i);
    }
    printf("break example.\n");
    for(int j=0;j<=10;j++){
        if(j==7)break;
        printf("%d\n",j);
    }
    return 0;
}