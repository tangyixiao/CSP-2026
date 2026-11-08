#include<bits/stdc++.h>
using namespace std;
/*

*/
const int N=5*1e5+5,M=3*1e5+5;
int n,m,a[N],ans[M];
bool used[M];
struct node{
	int t,x;
}st[N];
int k;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if((long long)n*m>=1LL*(100000000)){
		for(int i=n;i>=1;i--){
			int x=a[i];
			while(k&&used[x]){
				ans[st[k].x]+=st[k].t-i;
				used[st[k].x]=false;
				k--; 
			}
			st[++k]={i,x};
			used[x]=true; 
		}
		for(int i=1;i<=k;i++){
			ans[st[i].x]+=st[i].t;
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' '; 
		}
		cout<<"\n";
		return 0;
	} 
 	for(int s=1;s<=n;s++){
 		for(int i=s;i<=n;i++){
 			int x=a[i];
 			while(k&&used[x]){
 				used[st[k].x]=false;
 				k--;
			}
			st[++k]={0,x};
			used[x]=true;
		}
		while(k){
			ans[st[k].x]++,used[st[k].x]=false,k--; 
		}
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
 
