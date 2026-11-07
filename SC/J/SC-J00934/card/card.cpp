#include<iostream>
using namespace std;

const int N=5e5+5,M=3e5+5;;
int a[N],mp[M],ans[M],n,m;

void zdy_meqt(){
	for(int i=1;i<=m;i++){
		mp[i]=0;
	}
}

void zdy_me(int p,int num){
	for(int i=p;i>=1;i--){
		if(a[i]==num&&i!=p){
			break;
		}
		mp[a[i]]=0;
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]); 
	}
	for(int ju=1;ju<=n;ju++){
		zdy_meqt();
		for(int i=ju;i<=n;i++){
			if(mp[a[i]]==0){
				mp[a[i]]=1;
			}else if(mp[a[i]]!=0){
				zdy_me(i,a[i]);
				mp[a[i]]=1;
			}
		}
		for(int i=1;i<=m;i++){
			ans[i]+=mp[i];
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}