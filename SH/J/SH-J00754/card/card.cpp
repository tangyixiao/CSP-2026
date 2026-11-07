#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],pos[300005],sta[500005],cnt[300005],top;
bool exist[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(sta,0,sizeof(sta));
		memset(exist,0,sizeof(exist));
		memset(pos,0,sizeof(pos));
		top=1;
		for(int j=i;j<=n;j++){
			if(exist[a[j]]){
				for(int k=pos[a[j]]+1;k<top;k++){
					exist[sta[k]]=0;
					pos[sta[k]]=0;
				}
				top=pos[a[j]];
			}
			sta[top]=a[j];
			pos[a[j]]=top;
			exist[a[j]]=1;
			top++;
		}
		for(int j=1;j<top;j++){
			cnt[sta[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
} 
