#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int cnt=0;
    string a;
    cin>>a;
    for(int i=a.size();i>0;i--){
        if(a[i]==a[i+1])cnt++;
    }
    if(cnt>0)cout<<0;
    return 0;
}
