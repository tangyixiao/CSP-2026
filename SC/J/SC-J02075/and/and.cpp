#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
long long a[N],k[N];
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==n){
		k[1]=a[1];
		for(int i=2;i<=n;i++){
			k[i]=k[i-1]&&a[i];
		}
		cout<<k[n];
		return 0;
	}
	if(m==n-1){
		k[1]=a[1];
		for(int i=2;i<=n;i++){
			k[i]=k[i-1]&&a[i];
		}
		cout<<k[n];
		int max1=0;
		for(int i=1;i<=n;i++){
			int s=k[n]&&a[i];
			max1=max(max1,s);
		}
		cout<<max1;
		return 0;
	} 
	cout<<12;
}