#include<bits/stdc++.h>
using namespace std;
long long s[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	if(m==1){
		sort(s+1,s+n+1);
		cout<<s[n];
		return 0;
	}
	if(m==2){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int x=s[i] & s[j];
				//cout<<x<<s[i]<<s[j]<<endl;
				maxn=max(maxn,x);
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		int x=s[1];
		for(int i=2;i<=n;i++){
			x=x & s[i];
		}
		cout<<x;
		return 0;
	}
	if(m==n-1){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i){
					continue;
				}
				int x=s[i] & s[j];
				//cout<<x<<s[i]<<s[j]<<endl;
				maxn=max(maxn,x);
			}
		}
		cout<<maxn;
		return 0;
	}
	return 0;
}
