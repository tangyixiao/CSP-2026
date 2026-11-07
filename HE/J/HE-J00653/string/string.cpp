#include<bits/stdc++.h>
using namespace std;
int n;
long long a,l=0,r=0,cnt=0,ans=0;
string s,sl;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i =1;i<=n;i++){
        cin >> a >> sl;
        cnt += a;
        for(long long j = 1;j<=a;j++){
            s += sl;
        }
    }
    r = cnt-1;
    for(long long i = 0;i<=cnt/2;i++){
        if(s[l]!=s[r]){
            ans++;
            s[l]=s[r];
        }
        l+=1;
        r-=1;
    }
    cout << ans;
    return 0;
}
