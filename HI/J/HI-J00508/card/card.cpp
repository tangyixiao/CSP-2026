#include<bits/stdc++.h>
using namespace std;
const long long int M=3*1e5+3;
const long long int N=5*1e5+3;
long long int a[N],desk[N],ans[M];
bool flag[N];
bool check(int x,int now,int n){
	for(int i=1;i<=now;i++){
		if(desk[i]==x) return 1;
	}
	return 0;
}
int selffind(int x,int now,int n){
	for(int i=1;i<=now;i++){
		if(desk[i]==x) return i;
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int now=0;
		for(int j=i;j<=n;j++){
			int x=a[j];
			bool f;
			f=check(x,now,n);
			if(f==0){
				desk[++now]=x;//
				continue;
			}
			else{
				int xy=selffind(x,now,n);
				for(int k=xy;k<=now;k++){
					desk[k]=0;
				}
				now=xy;
				desk[++now]=x;//
			}
		}
		for(int j=1;j<=now;j++){
			if(flag[desk[j]]==false){
				ans[desk[j]]++;
				flag[desk[j]]=true;
			}
		}
		memset(desk,sizeof(desk),0);
		memset(flag,sizeof(flag),0);
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
