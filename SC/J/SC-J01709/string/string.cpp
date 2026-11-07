#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    string s="";
    for(int i=1;i<=n;i++){
        long long num;
        char c;
        cin>>num>>c;
        for(int j=1;j<=num;j++){
            s+=c;
        }
    }
    int len=s.length();
    int cnt=0;
    for(int i=0;i<(len/2+len%2);i++){
        if(s[i]!=s[len-i-1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}