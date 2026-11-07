#include<bits/stdc++.h>
#define int long long
using namespace std;
struct st{
	int y=0,xia;
}you[300005];
int n,m,a[500005],b[300005],de[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int mei=1;mei<=n;mei++){//第mei局 
		int chang=0;
		for(int i=mei;i<=n;i++){
			if(you[a[i]].y){
				for(int i1=you[a[i]].xia+1;i1<=chang;i1++){
					you[de[i1]].xia=0;
					you[de[i1]].y=0;
					de[i1]=0;
				}
				chang=you[a[i]].xia;
			}
			else{
				de[++chang]=a[i];
				you[de[i]].xia=chang;
				you[de[i]].y=1;
			}
		}
		for(int i=1;i<=chang;i++){
			b[de[i]]++;
			de[i]=0;
		}
		for(int i=1;i<=m;i++){
			you[i].xia=0;
			you[i].y=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
} 