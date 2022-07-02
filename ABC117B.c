#include<stdio.h>
int main(){
    int n,m=0,s=0;
    scanf("%d ",&n);
    int l[n];
    for(int i=0;i<n;i++)
        scanf("%d",&l[i]);

    for(int i=0;i<n;i++){
        if(l[i]>l[m]) m=i;
        s += l[i];
    }
    s-=l[m];

    if(l[m]<s){
        printf("Yes");
    }else{
        printf("No");
    }  

    return 0;
}