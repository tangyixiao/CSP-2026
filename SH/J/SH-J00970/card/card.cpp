#include<bits/stdc++.h>
using namespace std;
int a[200005];
int cnt[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;

	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==a[i-1]){
			a[i-1]=-a[i];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cnt[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i];
		if(i!=m){
			cout<<" ";
		}
	}
	return 0;
} 
