#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005];
string k2(int n){
	string s;
	while(n>1){
		if(n%2==1)s="1"+s;
		else s="0"+s;
		n/=2;
	}
	if(n%2==1)s="1"+s;
	return s;
}
int AND(int x,int y){
	string sx,sy;
	sx=k2(x),sy=k2(y);
	string ans;
	int lx=sx.size(),ly=sy.size();
	for(int i=0;i<lx;i++)ans+="0";
	for(int i=0;i<lx-ly;i++)sy="0"+sy;
	for(int i=lx-1;i>=0;i--){
		if(sx[i]==sy[i])ans[i]='1';
		else ans[i]='0';
	}
	int base=1,ret=0;
	for(int i=ans.size()-1;i>=0;i--){
		ret+=base*(ans[i]-'0');
		base*=2;
	}
	return ret;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int k=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		k=AND(k,a[i]);
	}
	cout<<k;
	return 0;
}