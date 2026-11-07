#include<bits/stdc++.h>
using namespace std;
int const N=5*1e5+10;
int a[N],b[N],c[N],d[N];//a:输入的纸牌，b:为i的纸牌数量，c:地i局最后的，d:去重 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		b[i]=0;
		d[i]=0;
	}
	for(int i=1; i<=n; i++){
		int l=i;
		for(int j=i; i<=n; j++){
			if(d[a[j]]==0){
				c[j]=a[j];
				d[a[j]]++; 
			}
			else{
				l=j;
				c[j]=a[j];
//				for(int k=0; k<=n; k++){
//					d[k]=0;
//				}
				memset(d,0,sizeof(d)); 
				d[j]++;
			}
		}
		for(int j=l; j<=n; j++){
			b[c[j]]++;
		}
	}
	for(int i=1; i<=m; i++){
		cout<<b[i]<<" ";
	}
	
	
	return 0;
}
