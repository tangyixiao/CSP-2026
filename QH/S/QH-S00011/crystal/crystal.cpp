#include<bits/stdc++.h>
using namespace std;
long long a[1000010];
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long ans=1;
	long long maxn=-1;
	for(int i=1;i<=n;i++){
		ans=1;
		for(int j=i+1;j<=m+1;j++){
			if(a[i]<a[j]){
				a[i]++;
				if(a[i]==a[j]){
					ans++;
				}
				else{
					j=i+1;
				}
			}
			else if(a[i]==a[j]){
				ans+=1;
			}
			else{
				break;
			}
		}
		maxn=max(maxn,ans);
	}
	cout<<maxn;
	return 0;
}
