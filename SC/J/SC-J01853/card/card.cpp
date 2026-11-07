#include<bits/stdc++.h>
using namespace std;
int ans[400006];
int table[600006];
int card[600006];
int cnt=0;
int main(){
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
int n,m;
cin>>n>>m;
for(int a=1;a<=n;a++){
	cin>>card[a];
}
for(int round=1;round<=n;round++){
	for(int test=round;test<=n;test++){
		for(int k=1;k<=test;k++){
			if(card[test]==table[k]&&cnt==0){
				cnt++;
				for(int j=k;j<=test;j++){
					table[j]=0;
				}
				table[k]=card[test];
			}
		}
		if(cnt==0) table[test]=card[test];
		cnt=0; 
	}
	for(int w=1;w<=n;w++){
		if(table[w]!=0) ans[table[w]]++;
	}
	for(int t=1;t<=n;t++){
		table[t]=0;
	}
}
for(int u=1;u<=m;u++){
	cout<<ans[u]<<" ";
}
	
	return 0;
} 