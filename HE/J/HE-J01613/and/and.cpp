#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N=1e8+10;
LL n,m;
LL q[N];
bool use[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(LL i=0;i<n;i++){
		cin>>q[i];
	}
	sort(q,q+n);
	LL res=-1e9;
	for(LL i=0;i<m;i++){
		for(LL j=i;j<n;j++){
			for(LL k=j+1;k<n;k++){
				LL a,b;
				if(!use[j]&&!use[k]){
					LL x=q[j]&q[k];
					if(x>res){
						a=j;
						b=k;
					}
					res=max(res,x);
				}
				use[a]=true;
				use[b]=true;
			}
		}
	}
	cout<<res;
	return 0;
}
