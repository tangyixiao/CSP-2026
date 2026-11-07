#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
 	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	if(m==n){
		int k=a[1]&a[2];
		for(int i=3;i<=n;i++){
			k=a[i]&k;
		}
		cout<<k;
		return 0;
	}
	sort(a+1,a+1+n);
	cout<<a[n-m+1];
	return 0;
} 
