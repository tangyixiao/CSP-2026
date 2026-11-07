#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int n,m;
bool vis[N];
int mx=INT_MIN;
void f(int t,int sum){
	if(t==0){
		mx=max(mx,sum);
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			f(t-1,sum&a[i]);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=1;
		f(m-1,a[i]);
		vis[i]=0;
	}
	cout<<mx;
	return 0;
}