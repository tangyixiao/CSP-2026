#include<bits/stdc++.h>
using namespace std;
long long n,m,a[10000005],maxn,b[10000005],c,d[10000005];
int qcfs(int s){
	int cfs=0;
	do{
		s/=2;
		cfs++;
	}while(s/2!=0);
	return cfs;
}
int awy(int a1,int a2){
	int cf1=qcfs(max(a1,a2));
	int cf2=qcfs(min(a1,a2));
	int e=max(a1,a2);
	for(int i=cf1;i>cf2;i--){
		e-=pow(2,i);
	}
	if(e>=pow(2,cf2)&&e-pow(2,cf2)>=min(a1,a2)) e-=pow(2,cf2);
	if(a1>a2) a1=e;
	else a2=e;
	int s=0;
	for(int i=cf2;i>=0;i--){
		if(a1>=pow(2,i)&&a2>=pow(2,i)){
			a1-=pow(2,i);
			a2-=pow(2,i);
			s+=pow(2,i);
		}else if(a1>=pow(2,n)){
			a1-=pow(2,n);
		}else if(a2>=pow(2,n)){
			a2-=pow(2,n);
		}
	}
	return s;
}
void dfs(int step){
	if(step==m+1){
		c=awy(a[b[1]],a[b[2]]);
		for(int i=3;i<step;i++){
			c=awy(c,a[b[i]]);
		}
		maxn=max(maxn,c);
		return;
	}
	for(int i=1;i<=n;i++){
		if(d[i]==0){
			b[step]=i;
			d[i]=1;
			dfs(step+1);
			d[i]=0;
		}
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1);
	cout<<maxn;
	return 0;
}