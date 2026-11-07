#include<bits/stdc++.h>
using namespace std;
long long a[200001];
char b[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int ans=1,lx=1;
	for(int i=2;i<=n;i++){
		if(a[i]==a[i-1]){
			ans++;
		}
		if(b[i]!=b[i-1]){
			lx++;
		}
	}
	if(ans==n){
		cout<<n/2*a[1];
	}
	if(lx==n){
		sort(a+1,a+1+n);
		cout<<a[n];
	}
	return 0;
}