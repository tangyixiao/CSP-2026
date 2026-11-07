#include<bits/stdc++.h>
using namespace std;
int a[500005],cnt[500005],tmp[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,l;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(tmp,0,sizeof(tmp));
		for(int j=i;j<=n;j++){
			tmp[j]=a[j];
			for(int k=i;k<j;k++){
				if(tmp[k]==tmp[j]){
					for(int g=k;g<j;g++)
						tmp[g]=0;
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(tmp[j])
				cnt[tmp[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	return 0;
}
