#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[20011]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxn=0;
	if(m=1){
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
	}else if(m=2){	
		for(int i=1;i<=n-m;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
	}else if(m=n){
		maxn=a[1];
		for(int i=2;i<=n;i++){
			maxn&=a[i];
		}
	}
	cout<<maxn;
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}
