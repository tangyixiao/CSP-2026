#include <bits/stdc++.h>
using namespace std;

using ll=long long;
ll n,sum;
string s;
ll la,now,gong,lin;
char lc;
vector<ll>a;
vector<char>c;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>la>>lc;
        a.push_back(la);
        c.push_back(lc);
    }
    lin=a[0];
    for(int i=1;i<n;i++){
        lin=__gcd(lin,a[i]);
    }
    for(int i=0;i<n;i++){
        a[i]/=lin;
        gong+=a[i];
        for(int j=1;j<=a[i];j++){
        	s.push_back(c[i]);
		}
    }
    for(int i=(gong+1)/2;i<gong;i++){
        if(s[i]!=s[gong-i-1]) sum++;
    }
    cout<<sum*lin;
    return 0;
}