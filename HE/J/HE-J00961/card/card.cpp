#include<iostream>
using namespace std;
int a[500010],bot[300010],desk[300010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i,o=1;j<=n;j++){
			if(bot[a[j]]==0){
				desk[o]=a[j];
				bot[a[j]]=o;
				o++;
			}else{
				while(desk[o-1]!=a[j]){
					bot[desk[o-1]]=0;
					desk[o-1]=0;
					o--;
				}
			}
		}
		int p=1;
		while(desk[p]!=0){
			ans[desk[p]]++;
			bot[desk[p]]=0;
			desk[p]=0;
			p++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
