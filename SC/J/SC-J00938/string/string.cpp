#include<bits/stdc++.h>
using namespace std;
long long n,a[500001],f=1,d=1,ans,m;
char c[500001],s[5000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cin>>a[1]>>c[1];
	for(int i=2;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]!=a[i-1]){
			f=0;
		} 
		if(c[i]!=c[i-1]){
			d=0;
		}
	}
	if(d==1){
		cout<<0;
		return 0;
	}
	if(f==1){
		for(int i=1;i<=n/2;i++){
			if(c[i]!=c[n-i+1]) ans++;
		}
		ans*=a[1];
		cout<<ans;
		return 0;
	}
		for(int i=1;i<=n;i++){
			m+=a[i];
			for(int j=m-a[i]+1;j<=m;j++){
				s[j]=c[i];
			}
		}
		for(int i=1;i<=m/2;i++){
			if(s[i]!=s[m-i+1]) ans++;
		}
		cout<<ans;
}