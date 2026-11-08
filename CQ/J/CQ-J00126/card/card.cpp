#include<bits/stdc++.h>
using namespace std;
#define ill int long long
ill cards[200005],n,m,f[200005],q[200005];

int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ill i=1;i<=n;i++){
		cin>>cards[i];
	}
	for(ill i=1;i<=n;i++){
		for(ill p=0;p<=m;p++)f[p]=0;
		for(ill j=i;j<=n;j++){
			if(f[cards[j]]==1){
				for(ill k=j-1;k>=i;k--){
					if(cards[k]!=cards[j]){
						q[cards[k]]--;
						f[cards[k]]=0;
					}
					else break;
				}
				f[cards[j]]=1;
			}else{
				f[cards[j]]=1;
				q[cards[j]]++;
			}
		}
	}for(ill i=1;i<=m;i++)cout<<q[i]<<" ";
	
	return 0;
}
