#include<bits/stdc++.h>
using namespace std;
int n,k;
int p,p1,u;
int sl[200010]; 
int a[200010],mx;
void dfs(int d,int yx,int z){
	if(yx==k){
		p=max(p,z);
		return ;
	}
	if(d>n || z<=p && yx!=0) return ;
	dfs(d+1,yx,z);
	if(yx==0) dfs(d+1,yx+1,a[d]);
	else dfs(d+1,yx+1,z&a[d]);
}
void fs(int q,int d,int z,int x){
	if(q==0){
		p1=max(p1,z);
		return ;
	}
	if(d==5) return ;
	fs(q,d+1,z,x);
	if(x==0){
		fs(max(0,q-sl[d]),d+1,d,x+1);
	}else{
		fs(max(0,q-sl[d]),d+1,d&z,x+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(log2(a[i]+1)==int(log2(a[i]+1))) u++;
		mx=max(mx,a[i]);
	}
	if(n<=20){
		dfs(1,0,0);
		cout<<p;
	}else if(n<=2000){
		if(k==1){
			int o=0;
			for(int i=1;i<=n;i++){
				o=max(o,a[i]);
			}
			cout<<o;
		}else if(k==2){
			int o=0;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					o=max(o,a[i]&a[j]);
				}
			}
			cout<<o;
		}else{
			int o=a[1];
			for(int i=2;i<=n;i++){
				o&=a[i];
			}
			cout<<o;
		}
	}else{
		if(k==n-1){
			int dpq[200010],dph[200010];
			dpq[1]=a[1];
			for(int i=2;i<=n;i++){
				dpq[i]=dpq[i-1]&a[i];
			}
			dph[n]=a[n];
			for(int i=n-1;i>=1;i--){
				dph[i]=dph[i+1]&a[i];
			}
			int o=0;
			for(int i=1;i<=n;i++){
				o=max(o,dpq[i-1]&dph[i+1]);
			}
			cout<<o;
		}else if(mx<=4){
			for(int i=1;i<=n;i++){
				sl[a[i]]++;
			}
			fs(k,0,0,0);
		}else if(u==n){
			sort(a+1,a+1+n);
			cout<<a[n-k+1];
		}
	}
	return 0;
}
