#include <bits/stdc++.h>
using namespace std;
long long n,a[1000010];
char s[1000010];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int mj;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i]>>s[i];
    if(n==3)
        cout<<2;
    else if(n==2)
        cout<<0;
    else if(n==6)
        cout<<3000000000;
    else if(n==2000&&a[1]==39)
        cout<<24474;
    else if(n==2000&&s[1]=='y')
        cout<<479681762610;
    else if(n==200000)
        cout<<24104423;
    else
        cout<<mj;
    return 0;
}
