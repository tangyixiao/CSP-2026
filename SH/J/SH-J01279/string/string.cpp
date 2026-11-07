#include<bits/stdc++.h>
using namespace std;
bool huiwen(string s){
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    return true;
}
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,a[2000005];
    char k;
    string str="";
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cin>>k;
        for(int j=1;j<=a[i];j++)
            str+=k;
    }
    if(huiwen(str) || n==1){
        cout<<0;
        return 0;
    }
    cout<<n/2;
    return 0;
}
