#include<bits/stdc++.h>
using namespace std;

int f[500005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 

	int n,m;
	cin>>n>>m;
	vector<int> a(n+5),c(m+5);
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[a[i]]=i;
	}
	for(int t=1;t<=n;t++){
		for(int i=t;i<=n;i++){
			c[a[i]]++;
			i=f[a[i]];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}

