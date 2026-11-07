#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
const long long N=5e5+5,B=131;
ll n,m,k,t,sum=0;
int a[N],vis[300005],ans[300005],ritk[300005];
//vector<int>v[300005]; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ritk[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int j=i,x=a[i];
		j=ritk[x];
		ans[x]++;
		while(j+1<=n){
			//cout<<j<<" "<<x<<" "<<ritk[x]<<"\n";
			j++;
			x=a[j];
			j=ritk[x];
			ans[x]++;
		}
		
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	} 
	return 0;
	
}
/*

4 3
1 2 1 3

3 1 4

-
10 3
3 1 2 1 3 2 3 1 2 1

10 3 3



我居然写完了 /O^O\ 
*/
