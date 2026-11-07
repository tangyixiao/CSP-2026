#include <bits/stdc++.h>
using namespace std;
long long a;
int c[100005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>c[i];
         if(c[i]==c[i-1])
        {
        cout<<"0";
        return 0;
        }
    }



    return 0;
}
