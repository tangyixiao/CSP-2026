#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],ans=0;
int main(){
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		int b=a[1];
		for(int i=2;i<=n;i++){
			b=b and a[i];
		}
		cout<<b;
		return 0;
	}
	if(m==1){
		cout<<"0";
		return 0;
	}
	sort(a+1,a+n+1);
	ans=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		ans=ans and a[i];
	}
	cout<<ans;
	return 0;
} 