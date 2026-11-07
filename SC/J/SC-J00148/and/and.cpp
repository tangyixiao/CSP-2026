#include<bits/stdc++.h>
using namespace std;
struct qrt{
	char q[34];
	bool p;
	long long e;
	int w=0;
}a[200050];
int bz=0;
int n,m;
long long g[200050];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		a[i].p==1;
		cin>>a[i].e;
		int y=a[i].e;
		int j=1;
		while(y!=0){
			a[i].q[j]=char(y%2+'0');
			if(a[i].q[i]=='1'){
				a[i].w++;
			}
			j++;
			y/=2;
		}
	}int lk=0;
	for(int i=31;i>=1;i--){
		lk=0;
		for(int j=1;j<=n;j++){
			if(a[j].q[i]=='1'){
				a[j].p=1;
				lk++;
			}else{
				a[j].p=0; 
			}
		}
		if(lk>=m){
			break;
		}
	}
	if(lk==m){
		long long ans=0,pwe=0;
		for(int i=1;i<=n;i++){
			if(a[i].p==1){
				pwe++;
				if(pwe==1){
					ans=a[i].e;
				}else{
					ans=ans&a[i].e;
				}
				
			}
		}cout<<ans;
	}else{
		int zj=0;
		for(int i=1;i<=n;i++){
			if(a[i].p==1){
				zj++;
				g[zj]=a[i].e;
			}
		}sort(g+1,g+1+zj);
		long long ans=g[zj];
		for(int i=zj;i>=zj-m+1;i--){
			ans=ans&g[i];
		}cout<<ans;
	}
	return 0;
} 