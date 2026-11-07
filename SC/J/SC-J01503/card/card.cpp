#include<bits/stdc++.h>
using namespace std;
int n,m;
struct node{
	int x,y;
}a[500010];
int tong[300010];
int ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		if(tong[a[i].x])a[tong[a[i].x]].y=i;
		tong[a[i].x]=i;
	}
	for(int i=1;i<=n;i++){
		int j=i;
		while(j<=n){
			if(a[j].y==0){
				ans[a[j].x]++;
				j++;
			}else{
				j=a[j].y;
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}