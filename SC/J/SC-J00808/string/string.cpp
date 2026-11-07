#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+10;
ll n,x;
char c,s[maxn];
void solve(){
	cin>>n;
	ll sum=0,last=1;
	for(int i=1;i<=n;i++){
		cin>>x>>c;
		sum+=x;
		for(int i=last;i<last+x;i++){
			s[i]=c;
		}
		last+=x;
	}
	ll cnt=0;
	for(int i=1;i<=sum/2;i++){
		if(s[i]!=s[sum-i+1]){
			cnt++;
		}
	}
	cout<<cnt;
}
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	solve();
	fclose(stdin);
	fclose(stdout);
	return 0;
}//暴力64分 