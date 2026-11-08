#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define N 500005
#define ll long long
int n,m;
int a[N],b[N];
ll cnt[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memcpy(b,a,sizeof(b));
		for(int j=i;j<=n;j++){
			int cur=b[j];
			bool flag=false;
			for(int k=j-1;k>=i;k--){
				if(b[k]==cur){
					flag=true;
					break;
				}
			}
			if(flag){
				for(int k=j-1;k>=i;k--){
					if(b[k]==cur){
						b[k]=-1;
						break;
					}
					b[k]=-1;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(b[j]!=-1) cnt[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}

