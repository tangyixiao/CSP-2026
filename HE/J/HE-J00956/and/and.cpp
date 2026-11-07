#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","w",stdout);
	freopen("and.out","r",stdin);
	int n,m,sum=1;
	cin>>n>>m;
	int a[200001];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}if(n==m){
		for(int i=1;i<=n;i++)sum*=a[i];
		cout<<sum;
		return 0;
	}
	else if(m==1){
		int maxn=a[1];
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}cout<<maxn;
		return 0;
	}
	else if(m==2){
		int maxn=a[1]&a[2];
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		return 0;
	}
	
	return 0;
}
