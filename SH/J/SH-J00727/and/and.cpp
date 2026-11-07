#include<bits/stdc++.h>
using namespace std;
#define int long long
struct nux{
	int a,f[35];
}nu[200005];
int n,m,num[35],maxj=-1;
bool cmp(nux x,nux y){
	int mod=pow(2,maxj+1);
	return (x.a%mod)>(y.a%mod);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>nu[i].a;
		int kp=nu[i].a,j=0;
		while(kp>0){
			nu[i].f[j]=kp%2;
			num[j]+=nu[i].f[j];
			kp/=2;
			j++;
		}
		maxj=max(maxj,j-1);
	}
	int flag=0;
	while(maxj>=0){
		if(num[maxj]>=m){
			flag=1;
			break;
		}
		maxj--;
	}
	if(!flag){
		cout<<0;
		return 0;
	}
	int top=num[maxj];
	sort(nu+1,nu+n+1,cmp);
	while(maxj>0){
		maxj--;
		while(maxj>0&&num[maxj]<m)maxj--;
		sort(nu+1,nu+top+1,cmp);
		if(nu[m].f[maxj]==0)continue;
		else{
			if(nu[m+1].f[maxj]==0){
				break;
			}else{
				while(nu[top].f[maxj]==0)top--;
			}
		}
	}
	int ans=(1<<31)-1;
	for(int i=1;i<=m;i++){
		ans&=nu[i].a;
	}
	cout<<ans;
	return 0;
} 
