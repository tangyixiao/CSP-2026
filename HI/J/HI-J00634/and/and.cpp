#include<bits/stdc++.h>
using namespace std;
long long a[200001];
long long maxn;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
	}
	else if(n==2){
		cout<<(a[1]&a[2]);
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			
		}
	}
	return 0;
}

