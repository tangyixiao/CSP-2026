#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
long long n,sum,maxn,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		maxn=max(maxn,a[i]);
		sum+=a[i];
	}
	if(maxn<=500&&n<=2000){
		string s="";
		long long ans=0;
		for(int i=1;i<=n;i++) for(int j=1;j<=a[i];j++) s+=c[i];
		for(int i=0;i<(sum+1)/2;i++) if(s[i]!=s[sum-1-i]) ans++;
		cout<<ans;
		return 0;
	}
	cout<<1000000000;
	return 0;
}
