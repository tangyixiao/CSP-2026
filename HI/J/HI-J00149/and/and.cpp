#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
string s[200005];
bool cmp(string x,string y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		while(a[i]){
			s[i]+=(char)(a[i]%2+'0');
			a[i]/=2;
		}
		reverse(s[i].begin(),s[i].end());
	}
	sort(s+1,s+n+1,cmp);
	long long ans=0;
	for(int i=1;i<=m;i++){
		long long sum=0;
		int x=1;
		for(int j=s[i].size()-1;j>=0;j--){
			sum+=(s[i][j]-'0')*x;
			x*=2;
		}
		if(i==1) ans=sum;
		else ans&=sum;
		//cout<<sum<<'\n';
	}
	cout<<ans;
	return 0;
}

