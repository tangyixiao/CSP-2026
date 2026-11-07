#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],dd[200010],pre[200010],maxn=-1,maxnn=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxnn=max(maxn,a[i]);
		pre[i]=pre[i-1]&a[i];
	}
	if(n==m){
		cout<<pre[n];
	}else if(m==1){
		cout<<maxnn;
	}else if(m==n-1){
		long long nn=0;
		for(int j=1;j<=n;j++){
			for(int i=1;i<=n;i++){
				if(i==j) continue;
				nn&=a[i];
			}
			maxn=max(maxn,nn);
		}
		cout<<maxn<<endl;
	}else{
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
