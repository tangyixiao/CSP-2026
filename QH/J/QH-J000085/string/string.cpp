#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m=0,ans=0;
	string a;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;
		cin>>x;
		char y;
		cin>>y;
		if(x<1e5){
			for(long long j=1;j<=x;j++){
				a+=y;
			}
			m=(m+x)%(long long)(1e9);
		}
	}
	m=m/2-1;
	for(int i=0;i<=m;i++){
		if(a[i]!=a[int(a.size())-i-1])ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
