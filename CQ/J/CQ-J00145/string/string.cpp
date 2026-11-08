#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MXN=200010;
int n;
ll a[MXN],mid=0,len=0,ans=0,mx=0,sum=0;
char c[MXN];
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		mx=max(mx,a[i]);
		sum+=a[i];
	} 
	if(n*mx>=200000){
		cout<<sum/2ll;
		return 0;
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++) s+=c[i];
	}
	len=s.length();
	mid=len+(len&1ll);
	mid/=2ll;
	for(int i=1;i<=mid;i++){
		ans+=(s[i-1]!=s[s.length()-i]);
	}
	cout<<ans;
	return 0;
}
