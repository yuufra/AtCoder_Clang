#include<stdio.h>
int main(){
    int a,b,c,s;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c) s=b*c/2;
    else if(b>a&&b>c) s=a*c/2;
    else if(c>a&&c>b) s=a*b/2;
    printf("%d",s);

    return 0;
}