#include<bits/stdc++.h>
using namespace std;
long long n,a[10005],s,ans,minx=1,t;
char c[10005];
string zhen,dao;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s+=a[i];
		for(int j=1;j<=a[i];j++){
			zhen+=c[i];
		}
	}
	for(int i=s-1;i>=0;i--){
		dao+=zhen[i];
	}
	for(int i=0;i<=s/2;i++){
		if(zhen[i]!=dao[i]){
			ans++; 
		}
	}
	cout<<ans*minx;
	return 0;
}