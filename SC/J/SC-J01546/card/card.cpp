#include<bits/stdc++.h>
using namespace std;
//awa
struct node{
	bool cunzai;
	int weizhi;
};
int n,m;
int a[500010],ans[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		node tj[500010];
		for(int j=i;j<=n;i++){
			tj[j].cunzai=1;
			tj[j].weizhi=j;
		}
		for(int j=i;j<=n;j++){
			int k=a[j];
			int siz=n-i+1;
			if(tj[k].cunzai==0){
				tj[j].cunzai=1;
				siz++;
				tj[j].weizhi=siz;
			}
			else{
				for(int o=tj[k].weizhi+1;o<=n;o++){
					tj[o].cunzai=0;
					siz--;
				}
			}
		}
		if(tj[i].cunzai==1){
			ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";  
	}
	return 0;
}