#include<bits/stdc++.h>
using namespace std;
long long s=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,s;
	cin>>n;
	long long a[n+1];
	char b[n+1],c[99999];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(b[i]!=b[j]) s++;
		}
	}
	if(s==0) cout<<0;
	else{
	if(n%2==0){
		cout<<n/2*a[n/2];	
	}
	else cout<<(n/2+1)*a[n/2+1];
	}
	return 0;
}