#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int k[n];
    int a[n][31];
    for(int i=0;i<n;i++){
        scanf("%d",&k[i]);
        for(int j=0;j<k[i];j++)
            scanf("%d",&a[i][j]);
    }
    int like[m];
    for(int i=0;i<=m;i++)
        like[i]=0;
    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<k[i];j++)
            like[a[i][j]]++;
    }

    for(int i=0;i<=m;i++){
        if(like[i]==n)
            ans++;
    }        

    printf("%d",ans);

    return 0;
}