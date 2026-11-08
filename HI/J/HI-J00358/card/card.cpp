#include<bits/stdc++.h>
using namespace std;

int a[500050];//存卡牌 
///int a1[500050][500050];//第几局游戏 de 结束顺序 
int lql[500050];

int main(){//fsdghytrefstyhrgef
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	

	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n; ){
			int x=a[j];
			int j2=-1;
			for(int j1=j+1;j1<=n;j1++){
				if(a[j1]==a[j]){
					j2=j1;
				}
			}
			if(j2==-1){
				lql[x]++;
				j++;
			}else{
				lql[x]++;
				j=j2+1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<lql[i]<<" ";
	}
	return 0;
}
