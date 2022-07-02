#include<stdio.h>
#define MAX_M 100000
int f(int);
int main(){
    int s,m,flag=0;
    int a[MAX_M];
    scanf("%d",&s);
    a[1] = s;

    for(int i=1;i<MAX_M;i++){
        a[i+1]=f(a[i]);
        for(int j=1;j<i;j++){
            if(a[i]==a[j]){
                m=i;
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }

    printf("%d",m);

    return 0;
}
int f(int n){
    if(n%2==0) return n/2;
    else return 3*n+1;
}