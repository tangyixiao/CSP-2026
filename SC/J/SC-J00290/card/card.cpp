#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[50005];
int t[50005];
int la[50005];
void game(int g){
	if(g>=n){
		t[a[g]]++;
		return;
	}
	int l=la[a[g]];
	t[a[l]]++;
	game(l+1);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(t,0,sizeof(t));
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)la[a[i]]=i;
	for(int i=1;i<=n;i++)game(i);
	for(int i=1;i<=m;i++)cout<<t[i]<<" ";
	return 0;
} 