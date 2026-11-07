#include<bits/stdc++.h>
using namespace std;
using ull=unsigned long long;
const ull N=3e5;
string s; 
ull n,x,ans;
struct obj{
	ull cnt;
	char zf;
}a[N],b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(0);
	cout.tie(nullptr)->sync_with_stdio(0); 
	cin>>n;
	for(ull i=1;i<=n;i++){
		cin>>a[i].cnt>>a[i].zf;
		for(ull j=1;j<=a[i].cnt;j++) s+=a[i].zf;
	}
	for(ull i=0;i<s.size()/2;i++) ans+=(s[i]!=s[s.size()-i-1]); 
	cout<<ans;
	return 0;
}