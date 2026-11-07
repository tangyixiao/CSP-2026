#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 int num[25],ans;
        string str[25];
        string a;
int main()
{
    freopen("string.in","w",stdin);
    freopen("string.out","r",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>num[i];
       cin>>str[i];
       while(num[i]>0)
       {
           a+=str[i];
           num[i]--;

       }

    }
    int l=a.size();
    for(int i=0;i<=l/2;i++)
    {

        if(a[i]!=a[l-i+1])
        {

            ans++;
        }
    }
cout<<ans;


return 0;
}
