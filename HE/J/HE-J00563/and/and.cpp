#include<bits/stdc++.h>
using namespace std;
const long long MAXN=200002;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,max=0;
	cin>>n>>m;
	long long a[MAXN];
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=(n-i);j++) {
			if(max<(a[i]&a[i+j])) max=a[i]&a[i+j];
		}
	}
	cout<<max;
	return 0;
} 
