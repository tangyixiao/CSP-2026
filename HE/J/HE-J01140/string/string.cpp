#include<bits/stdc++.h>
using namespace ::std;
 long long n,t,cnt;
 string s,x,y;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>t>>s;
        for(long long j=1;j<=t;j++)
            x+=s;
    }
    long long l=0,r=x.size()-1;
    while(l<=r){
        if(x[l]!=x[r])
            cnt++;
        l++;
        r--;
    }
    cout<<cnt;


    return 0;
}

