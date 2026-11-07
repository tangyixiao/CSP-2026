#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int tmp[500005];
int pos[300005];
int t[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	int len=0;
	for(int i=1;i<=n;i++){
		memset(tmp,0,sizeof(tmp));
		memset(pos,0,sizeof(pos));
		len=0;
		for(int j=i;j<=n;j++){
			if(pos[a[j]]==0){
				tmp[j]=a[j];
				pos[a[j]]=j;
				len++;
			}
			if(pos[a[j]]!=0){
				len++;
				for(int k=len;k>pos[a[j]];k--){
					pos[tmp[k]]=0;
					tmp[k]=0;
				}
				len=pos[a[j]];
			}
		}
		for(int j=1;j<=len;j++){
			t[tmp[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}
