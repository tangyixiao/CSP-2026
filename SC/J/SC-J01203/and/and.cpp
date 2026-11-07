#include<bits/stdc++.h>
using namespace std;
int a[2000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(m==1){
		long long maxn=-1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]>maxn){
				maxn=a[i];
			}
		}
		cout<<maxn;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		long long t=a[1];
		for(int i=2;i<=n;i++){
			t&=a[i];
		}
		cout<<t;
		return 0;
	}
	if(m==2){
		long long maxn=-1;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>=maxn){
					maxn=(a[i]&a[j]);
				}
			}
		}
		cout<<maxn;
		return 0;
	}
	sort(a+1,a+1+n);
	int ans=a[n];
	for(int i=1;i<m;i++){
		ans&=a[n-i];
	}
	cout<<ans;
	return 0;
}
