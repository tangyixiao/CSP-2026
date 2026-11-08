#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[100005],cnt[1000005],aa[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			aa[j]=a[i];	
		}		
		for(int j=1;j<i;j++){
			if(aa[j]==aa[i]){
				for(int z=j;z<i;z++){
					aa[z]=0;
				}
			}
			
		}		
		for(int j=1;j<=n;j++){
			if(cnt[aa[j]]==i){
				continue;
			}
			cnt[aa[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	
	return 0;
}
