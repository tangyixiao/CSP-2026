#include<bits/stdc++.h>
using namespace std;
int a[500010],table[500010],sum[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,k;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		k=0;
		for(int j=1;j<=n;j++){
			table[j]=0;//清空桌面 
		}
		for(int j=i;j<=n;j++){
			table[j]=a[j];//打出牌 
			for(int b=i;b<j;b++){
				if(table[b]==table[j]) {
					for(int c=b;c<j;c++){
						table[c]=0;//收牌 
					}
					break;
				}
			}
		}
		for(int j=1;j<=n;j++){
			for(int g=1;g<=m;g++){
				if(table[j]==g){
					sum[g]+=1;
					break;
					
				}
			}
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<' ';
	}
	return 0;
}
