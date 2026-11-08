#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n,m;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=(ans&a[i]);
		}
		cout<<ans;
		return 0;
	}
	else{
		long long mx=INT_MIN;
		for(int i=1;i<=n;i++){
			long long ans=a[i];
			for(int j=i;j<=n;j++){
				for(int k=1;k<=m;k++){
					if(a[i]!=a[j]){
						ans=(ans&a[j]);
					} 
				} 
				mx=max(mx,ans);
			}
		}
		cout<<mx;
		return 0;
	}
	return 0;
}
