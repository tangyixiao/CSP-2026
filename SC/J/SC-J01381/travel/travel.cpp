#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int c1,x1,c2,x2;
    char y1,y2;
    scanf("%d%d%c%d%d%c",&c1,&x1,&y1,&c2,&x2,&y2);
    if(c1!=c2)
        return puts("0000"),0;
    if(x1!=x2)
        return puts("1000"),0;
    if((y1>='D')!=(y2>='D'))
        return puts("1100"),0;
    if((y1=='D'&&y2=='F')||(y1=='F'&&y2=='D'))
        return puts("1111"),0;
    if(abs(y1-y2)==1)
        return puts("1111"),0;
    puts("1110");
}