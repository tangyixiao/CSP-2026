#include<bits/stdc++.h>
using namespace std;
int a[500001],lpos[500001],cnt[500001];
map<int,int>mp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]); 
		cnt[a[i]]++;
		lpos[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		int dipos=lpos[i]+1;
		mp[a[dipos]]+=cnt[i];
		while(dipos<n){
			dipos=lpos[a[dipos]]+1;
			mp[a[dipos]]+=cnt[i];
		}
	}
	for(int i=1;i<=m;i++) cout<<mp[i]+cnt[i]<<" ";
	fclose(stdin);
	fclose(stdout);
}
