#include <bits/stdc++.h>
using namespace std;
int m,n,table_s; 
int a[500050],sum[500050];
int table[500050],dui[500050];
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			table_s+=1;
			table[table_s]=a[i];
			for(int k=1;k<=table_s-1;k++){
				if(table[k]==a[i]){
					for(int x=k;x<=table_s-1;x++){
						table[x]=0;
						table_s--;
					}
					table[k]=a[i];
				}
			}
		}
		for(int i=1;i<=table_s;i++){
			sum[table[i]]++;
		}
		for(int i=1;i<=table_s+1;i++){
			table[i]=0;
		}
		table_s=0;
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	} 
	return 0;
} 
