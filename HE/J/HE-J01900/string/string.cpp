#include<bits/stdc++.h>
using namespace std;
long long n,a[2020],zd=0,ans=0;
char b[2020];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		zd+=a[i];
		for(int j=1;j<=a[i];j++){
			s=s+b[i];
		}
	}
	zd/=2;
	for(int i=0;i<zd;i++){
		if(s[i]!=s[n-i+1]){
			ans++;
		}
	}
	cout<<ans;
} 
