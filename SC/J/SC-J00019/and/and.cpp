#include<bits/stdc++.h>
using namespace std;
long long a[999999];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long maxx=-1;
	for(int i=1;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			for(int z=j+1;z<=n;z++){
				long long q=a[i]&a[j]&a[z];
				maxx=max(q,maxx);
			}
		}
		
	}
	cout<<maxx;
	return 0;
}