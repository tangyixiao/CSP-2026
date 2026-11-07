#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ma=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1) cout<<a[n];
	if(m==n){
		int c=a[1];
		for(int i=2;i<=n;i++){
			c&=a[i];
		}
		cout<<c;
	}
	else{
		int c=a[n];
		for(int i=n-1;i>=n-m+1;i--){
			c&=a[i];
		}
		cout<<c;
	}	
	return 0;
}