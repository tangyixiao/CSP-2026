#include<bits/stdc++.h>
using namespace std;
string a;
long long n,m,ans;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>m;
		cin>>b;
		for(long long j=1;j<=m;j++){
			a=a+b;
		}
	}
	long long l=0,r=a.size()-1;
	while(l<=r){
		if(a[l]!=a[r]){
			a[r]=a[l];
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}