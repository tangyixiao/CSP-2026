#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int flag[N],tot,n,m;
int a[N];
int maxn=-1;
int cnt_o[50];
int t[N][50];
void er(int id,int x){
	int tot=0;
	while(x){
		t[id][++tot]=x%2;
		x/=2;
	}
//	for(int i=32;i>=1;i--){
//		cout<<t[id][i];
//	}
	//cout<<endl;
	maxn=max(tot,maxn);
	return ;
}
int ans[50];
int daan(){
	int cheng=1;
	int res=0;
	for(int i=1;i<=maxn;i++){
		res+=ans[i]*cheng;
		cheng*=2;
	}
	return res;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		er(i,a[i]);
	}
	for(int i=maxn;i>=1;i--){
		for(int j=1;j<=n;j++){
				if(flag[j]) continue;
				if(t[j][i]==1) cnt_o[i]++;
			}
		if(cnt_o[i]<m){
			ans[i]=0;
		}else{
			ans[i]=1;
			for(int j=1;j<=n;j++){
				if(flag[j]) continue;
				if(t[j][i]==0) flag[j]=1;
			}
		}
	}
	printf("%d",daan());
	return 0;
}