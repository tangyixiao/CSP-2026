#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n=0,m=0,card[1000010];
	long long map[1000010];
	cin >>n>>m; 
	for(long long i=0;i<=n;i++){
		cin>>card[i];
	}
	for(long long i = 0;i<n;i++){
		for(long long j=0;j<n;j++){
			for(long long k=0;k<n;k++){
				map[k]++;
			}
			if(card[i]==card[j]&&i!=j&&card[i]!=-1&card[j]!=-1){
				for(long long k=i;k<j;k++){
					card[k]=-1;
				}
			}
		}
	}
	for(long long i=0;i<m;i++){
		cout<<map[i];
	}
	return 0;
} 
