#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500008],b[500008],k=0,ans[500008];
bool p[500008];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(p,0,sizeof(p));
		memset(b,0,sizeof(b));
		k=0;
		for(int j=i;j<=n;j++){
			if(p[a[j]]==0) k++,b[k]=a[j],p[a[j]]=1;
			else{
				while(true){
					if(b[k]==a[j]) break;
					p[b[k]]=0;
					b[k]=0;
					k--;
				}
			k++;
			}
		}
		for(int j=1;j<=m;j++) ans[b[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
