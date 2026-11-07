#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000005],cnt[1000005],bj[1000005],top,sti[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(bj,0,sizeof(bj));
		top=0;
		for(int j=i;j<=n;j++){
			if(bj[a[j]]!=0){
				for(int k=bj[a[i]]+1;k<=top;k++)bj[sti[k]]=0;
				top=bj[a[j]];
			}
			else sti[++top]=a[j],bj[a[j]]=top;
		}
		for(int i=1;i<=top;i++)cnt[sti[i]]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
}