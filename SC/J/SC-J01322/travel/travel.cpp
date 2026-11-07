#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("travel.in","r",stdin);
    //freopen("travel.out","w",stdout);
    int n,k;
    char m[13];
    cin>>n;
    for (int i=1;i<=3;i++)
    {
        cin>>m[i];
    }
    cin>>k;
    for(int j=4;j<=6;j++)
    {
        cin>>m[j];
    }
    if(n==k)
    {

        cout<<'1';
    }
    else{
        cout<<"0000";
        return 0;
    }
    if(m[1]==m[4]&&m[2]==m[5])
    {
        cout<<'1';
    }
    else
    {
        cout<<"000";
        return 0;
        }
     if(m[3]<='C'&&m[6]<='C'||m[3]>'C'&&m[6]>'C')
     {
         cout<<'1';
         if(m[3]-m[6]==1||m[6]-m[3]==1)
         {cout<<'1';
         }
         else{cout<<'0';}

     }else{
     cout<<'00';
     }
     return 0;
}