#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0,a[500001],b[300001],c[500001];
//a是牌堆 b是多表示少局结束时桌面上留有点数为i的牌 c是这一局中桌面上的牌
bool t[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		ans=0;
		for(int j=1;j<=m;j++) t[i]=0;
		for(int j=i;j<=n;j++){
			if(t[a[j]]==0){//若桌面上没有点数为k的牌，就将这张牌放在最右端
				c[++ans]=a[j];
				t[a[j]]=1;
			}else{//否则，收走桌面上点数为k的牌的右侧的所有牌
				for(int k=ans;k>=1;k--){//找数为k的牌
					if(c[k]==a[j]){
						ans=k;
						break;
					}else t[c[k]]=0,c[k]=0; 
				}
			}
		}
		for(int j=1;j<=ans;j++) cout<<c[j]<<" ";
		cout<<"\n";
		for(int j=1;j<=ans;j++) b[c[j]]++,c[j]=0;
	}
	for(int i=1;i<=m;i++){
		if(i==a[n])  cout<<n<<" ";
		else cout<<b[i]<<" ";
	}
	return 0;
}
