#include <bits/stdc++.h>
using namespace std;
int n;
long long x,l;
char y;
string m;
int ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cin>>x>>y;
		cout<<'0';
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		for(long long j=l;j<x+l;j++){
			m[j]=y;
		}
		l+=x;
	}
	for(long long i=0,j=l-1;i<=l/2,j>=l/2;i++,j--){
		if(m[i]!=m[j]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
