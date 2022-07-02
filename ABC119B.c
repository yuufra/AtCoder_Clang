#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    double x[n];
    char u[n][4];
    for(int i=0;i<n;i++){
        scanf("%lf",&x[i]);
        scanf("%s",u[i]);
    }
    double ans=0;

    for(int i=0;i<n;i++){
        if(strcmp(u[i],"JPY")==0)
            ans+=x[i];
        else
            ans+=x[i]*380000;
    }        

    printf("%lf",ans);

    return 0;
}