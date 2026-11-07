#include<bits/stdc++.h>
using namespace std;
long long a[200050],a_n_d[200050];
int main(){
	freopen("and.in","r","stdin");
	freopen("and.out","w","stdout");
	int n,m;
	cin>>n>>m;
	int mx=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	cout<<mx;
	return 0;
} 


