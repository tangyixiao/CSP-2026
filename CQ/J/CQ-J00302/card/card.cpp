#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005];
long long num[500005];
long long cunzai[500005][500005];
long long now[500005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	long long cha=0;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		num[a[i]]+=i;
		cunzai[a[i]][i]++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			now[j]=0;
		}
		long long last;
		for(int j=1;j<=n;j++){
			if(cunzai[i][j]==1){
				now[j]++;
				last=j;
			}
		}
		long long lastt=last;
		for(int j=1;j<=n;j++){
			long long lasttt;
			for(int k=1;k<=lastt;k++){
			    if(now[k]==1){
			    	num[j]-=(last-k);
			    	lasttt=k;
			    }				
			}
			lastt=lasttt;
		}
	}
	for(long long i=1;i<=m;i++) cout<<num[i]<<" ";
	return 0;
} 

