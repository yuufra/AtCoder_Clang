#include<stdio.h>
int main(){
    char s[11];
    int f=0;
    scanf("%s",s);
    if(s[5]>'0') f=1;
    else if(s[5]=='0'&&s[6]>'4') f=1;

    if(f==1)
        printf("TBD");
    else
        printf("Heisei");

    return 0;
}