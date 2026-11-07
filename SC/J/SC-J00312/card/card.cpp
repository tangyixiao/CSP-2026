#include<bits/stdc++.h>
#define int long long
int n,m,card[5005],tot[5005][3003],fin[5005][5005],s,f,
ans[3003];
using namespace std;
signed main(){
	freopen("card.in","r",stdin);
  	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> card[i];
	}
	for(int ju=1;ju<=n;ju++){
		for(int p=ju;p<=n;p++){
			int a=card[p];
			for(int i=1;i<=m;i++){
				if(a==fin[ju][i]){
					f=1;
				}
				if(f){
					fin[ju][i]=0;
					s--;
				}
			}
			s++;
			fin[ju][s]=a;
			
		}
		for(int i=1;i<=n;i++){
			tot[ju][fin[ju][i]]=1;
		}
		f=0;
	}
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			ans[j]+=tot[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}