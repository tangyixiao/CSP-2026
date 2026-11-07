#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+6;

int n,m,top;
int a[N],stk[N],flg[N],ans[N];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		top=0;fill(flg+1,flg+1+n,0);
		for(int j=i;j<=n;j++){
			if(flg[a[j]]){
				while(stk[top]!=a[j]){
					flg[stk[top]]=0;
					top--;
				}
				flg[a[j]]=1;
			}
			else flg[a[j]]=1,stk[++top]=a[j];
		}
		for(int i=1;i<=m;i++){
			if(flg[i]) ans[i]++;
//			cout<<flg[i]<<" ";
		}//cout<<"\n";
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	
	return 0;
}
/*
4 3
1 2 1 3

3 1 4
*/