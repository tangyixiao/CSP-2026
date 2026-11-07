#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],best=0;
void d(int x,int p,int sum,int o){
	if(p==m){
		if(sum>best) best=sum;
		sum=o;
		return;
	}
	for(int j=x;j<=n-m+1;j++){                                      
		d(j+1,p+1,sum&a[j],sum);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n-m+1;i++) d(i+1,1,a[i],a[i]);
	cout<<best;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
