#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N],ans[N]={0};
struct Node{
	int nxt,val;
}st[N];
void check(int x,int f){
	int ff=f;
	if(st[ff].val==a[x]){
		st[ff].nxt=0;
		return ;	
	}
	while(1){
		if(st[st[ff].nxt].val==a[x]){
			st[st[ff].nxt].nxt=0;
			return ;
		}
		if(st[ff].nxt==0)break;
		ff=st[ff].nxt;
	}
	st[ff].nxt=ff+1;
	st[ff+1].nxt=0;
	st[ff+1].val=a[x];
}
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	st[0].nxt=-1;
	st[0].val=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int f=1;
		for(int j=i;j<=n;j++){
			if(j==i){
				st[1].nxt=0;
				st[1].val=a[i];
			}
			check(j,f);
		}
		int ff=f;
		while(st[ff].nxt!=-1){
			ans[st[ff].val]++;
			ff=st[ff].nxt;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0; 
} 
