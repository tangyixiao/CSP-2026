#include<bits/stdc++.h>
using namespace std;
long long a[200005],mx=0;
int n,m;
void dfs(long long st,int ne,int now){
	if(ne==0){
		mx=max(mx,st);
		return ;
	}
	if(n-now+1<ne)return;
	for(int i=now;i<=n-ne+1;i++){
		if(ne==m){	
		    dfs(a[i],ne-1,i+1); 
		}
		else {
		    dfs(st&a[i],ne-1,i+1);	
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,m,1);
	cout<<mx;
	return 0;
}

