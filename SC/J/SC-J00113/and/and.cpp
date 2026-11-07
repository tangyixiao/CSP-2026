#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+7;
int f[N][32],a[N];
bool b[N];
int n,m;
ll solve(int x){
	if(x<=0)return 0;
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=(b[i] ? f[i][x]:0);
	}
	if(ans>=m){
		for(int i=1;i<=n;i++){
			if(!f[i][x])b[i]=false;
		}
		return 0LL+solve(x-1)+(1<<(x-1));
	}else{
		return 0LL+solve(x-1); 
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	memset(b,true,sizeof(b));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int j=1,x=a[i];
		while(x){
			if(x&1)f[i][j]=1;
			else f[i][j]=0;
			x>>=1;
			j++;	
		}
	}
	cout<<solve(31)<<endl;
	return 0;
}