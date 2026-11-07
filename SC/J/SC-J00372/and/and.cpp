#include<bits/stdc++.h>
using namespace std;
long long n,m,a[90000010],f[9010][9010];
string s;
long long __and(long long n,long long m){
	string x="",y="",ans="";
	while(n>0){
		x+=n%2+'0';
		n/=2;
	}
	while(m>0){
		y+=m%2+'0';
		m/=2;
	}
	long long lex=x.size()-1,ley=y.size()-1;
    for(int i=0;i<=max(x.size(),y.size());i++){
		ans+=x[i]&y[i];
	}
	long long num=0,p=1;
	for(int i=0;i<ans.size();i++){
		if(ans[i]=='1')num+=p;
		p*=2; 
	}
	return num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			f[i][j]=a[i];
			if(j+1<=m){
				f[i][j]=max(f[i][j],__and(f[i-1][j-1],a[j]));
			}
		}
	}
	cout<<f[n][m];
	return 0;
}
