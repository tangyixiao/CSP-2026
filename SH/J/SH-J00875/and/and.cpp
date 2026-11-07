#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],maxn=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			long long ans=a[i]&a[j];
			maxn=max(maxn,ans);
		}
	}
	cout<<maxn;
	return 0;
} 
