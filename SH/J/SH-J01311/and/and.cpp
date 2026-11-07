#include <bits/stdc++.h>
using namespace std;
string a[200007];
int ans=1,n,m,b[200007];
bool cmp(string x,string y){
	return x<y;
}
bool mcp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w".stdout);
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++) cin>>b[i];
		sort(b+1,b+n+1,mcp);
		cout<<b[1];
		return 0;
	}
	if(m==2){
		int ans=-1;
		for(int i=1;i<=n;i++) cin>>b[i];
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,b[i]&b[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	int f1=0,f2=0,mx=-1;
	for(int i=1;i<=n;i++){
		int x;
		string s;
		cin>>x;
		b[i]=x;
		if(b[i]!=(i-1)) f1=1;
		mx=max(x,mx);
		int y=x+1;
		while(y){
			if(y%2==1) f2=1;
			y/=2;
		}
		for(int j=1;j<=30;j++){
			s += (x==0? '0':char(x%2+'0'));
			if(x!=0) x/=2;
		}
		for(int j=1;j<=30;j++){
			a[i]+=s[30-i-1];
		}
	}
	if(!f1||f2){
		cout<<b[n-m+1]<<endl;
		return 0;
	} 
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++){
		ans&=b[i];
	}
	cout<<ans<<endl;
	return 0;
}
