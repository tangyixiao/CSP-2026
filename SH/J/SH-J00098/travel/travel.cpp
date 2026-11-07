#include<bits/stdc++.h>
using namespace std;
char a[10],b[10],c[10],d[10];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    scanf("%s%s%s%s",a+1,b+1,c+1,d+1);
    if(a[1]==c[1]&&a[2]==c[2])
        printf("1");
    else
        printf("0");
    if(b[1]==d[1]&&b[2]==d[2])
        printf("1");
    else
        printf("0");
    int q,w;
    if(b[3]=='D'||b[3]=='F')
        q=1;
    else
        q=2;
    if(d[3]=='D'||d[3]=='F')
        w=1;
    else
        w=2;
    if(q==w)
        printf("1");
    else
        printf("0");
    if(q==1){
        printf("1");
        return 0;
    }
    if(d[3]=='B'||b[3]=='B')
        printf("1");
    else
        printf("0");
    return 0;
}
