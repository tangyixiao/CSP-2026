#include<bits/stdc++.h>
using namespace std;
long long n,a[500005],pos[300005],m,ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		memset(pos,0,sizeof(pos));
		for(int j=i;j<=n;j++){
			if(!pos[a[j]]) pos[a[j]]=j;
			else{
				for(int k=pos[a[j]];k<j;k++){
					pos[a[k]]=0;
				}
				pos[a[j]]=j;
			}	
		}
		for(int j=1;j<=m;j++){
			if(pos[j]) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) cout << ans[i] << " ";
	return 0;
}
