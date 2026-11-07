#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],c[500005],b[300005],cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int l=1;
		for(int j=i;j<=n;j++){
			c[l]=a[j];
			if(b[c[l]]!=0){
				int wei=0;
				for(int z=1;z<l;z++){
					if(c[z]==c[l]) wei=z;
				}
				int o=l;
				for(int z=wei+1;z<=o;z++){
					b[c[z]]--;
					l--;
					c[z]==0;
				}
			}
			b[c[l]]++;
			l++;
		}
		for(int j=1;j<=m;j++){
			cnt[j]+=b[j];
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}