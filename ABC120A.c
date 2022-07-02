#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a*c>b)
        printf("%d",b/a);
    else
        printf("%d",c);

    return 0;
}