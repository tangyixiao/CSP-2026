#include<bits/stdc++.h>
using namespace std;
const int maxn=100001;
int a[maxn],zm[maxn],cnt[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int z=0;
		memset(zm,0,sizeof(zm));
		for(int j=i;j<=n;j++){
			bool cx=false;
			for(int k=1;k<=z;k++){
				if(zm[k]==a[j]){
					z=k;
					cx=true;
					break;
				}
			}
			if(!cx){
				z++;
				zm[z]=a[j];
			}
		}
		for(int j=1;j<=m;j++){
			for(int k=1;k<=z;k++){
				if(j==zm[k]){
					cnt[j]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}