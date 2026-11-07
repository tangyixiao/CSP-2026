#include<bits/stdc++.h>
using namespace std;
int n,m;
struct node{
	long long x;
	bool f;
}a[200009];
bool f[200009];
int k;
long long ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		a[i].f=true;
	}
	for(k=31;k>=0;k--){
		int cnt=0;
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;i++){
			if((a[i].x&(1<<k))!=0&&a[i].f==true){
				cnt++;
			}
			else {
				f[i]=true;
			}
		}
		if(m<=cnt){
			for(int i=1;i<=n;i++){
				if(f[i]){
					a[i].f=false;
				}
			}
			ans+=(1<<k);
		}
		//cout<<cnt<<' ';
	}
	cout<<ans;
	return 0;
}