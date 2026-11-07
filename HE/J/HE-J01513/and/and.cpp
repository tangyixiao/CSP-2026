#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long b[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int e=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(pow(2,(long long)(log2(a[i])))!=a[i]){
			b[++e]=a[i]; 
		}
	}
	sort(b+1,b+e+1);
	if(e<m){
		if(m==n){
			long long t=a[1];
			for(int i=2;i<=n;i++){
				t&=a[i];
			}
			cout<<t;
		}
		else cout<<0;
	}
	else cout<<b[e-m+1];
	return 0;
}
