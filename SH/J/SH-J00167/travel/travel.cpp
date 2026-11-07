#include<bits/stdc++.h>
using namespace std;
bool f[5]={1,1,1,0,0};
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,c2,w1,w2;

    cin>>c1>>w1>>c2>>w2;
    for(int i=0;i<=1;i++)
    {
        if(c1[i]!=c2[i])f[1]=0;
        if(w1[i]!=w2[i]||f[1]==0)f[2]=0;
    }
    if(f[2]==1&&((w1[2]<='C'&&w2[2]<='C')||(w1[2]>'C'&&w2[2]>'C')))f[3]=1;
    if(f[3]==1&&(w1[2]-'A'+1==w2[2]-'A'||w1[2]-'A'-1==w2[2]-'A'))f[4]=1;
    for(int i=1;i<=4;i++) cout<<f[i];
    return 0;
}
