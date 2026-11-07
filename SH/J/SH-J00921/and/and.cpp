#include<bits/stdc++.h>
using namespace std;
int a[35],b[35],c[35],n,m,aa[10000];
int yu(int x,int y){
	for(int i=0;i<=33;i++){
		a[i]=0;b[i]=0;c[i]=0;
	}
	int wei=0,ans=0;
	while(x){
		int t=x%2;
		a[wei++]=t;
		//cout<<a[wei-1]<<" ";
		x/=2;
	}
	//cout<<endl;
	wei=0;
	while(y){
		int t=y%2;
		//cout<<t<<" ";
		//cout<<endl;
		b[wei++]=t;
		//cout<<b[wei-1]<<" ";
		y/=2;
	}
	for(int i=0;i<=31;i++){
		if(a[i]&&b[i])c[i]=1;
	}
	for(int i=0;i<=31;i++){
		ans+=c[i]*pow(2,i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>aa[i];
	}
	if(m==1){
		sort(aa,aa+n+1);
		cout<<aa[n];
		return 0;
	}
	if(m==2){
		int maxv=-114514;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=m;j++){
				if(i==j)continue;
				int t=yu(aa[i],aa[j]);
				maxv=max(maxv,t);
			}
		}
		cout<<maxv;
	}
	if(m==n){
		int t=aa[1];
		for(int i=2;i<=n;i++){
			t=yu(t,aa[i]);
		}
		cout<<t;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
