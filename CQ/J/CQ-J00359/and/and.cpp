#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e5+10;
int a[N];
int getmaxx(int x){
	if(x<0){
		return 0;
	}
	int num=0;
	for(int i=1;i<=n;i++){
		if((a[i]>>x)&1){
			num++;
		}
	}
	if(num<m) return getmaxx(x-1);
	for(int i=1;i<=n;i++){
		if(((a[i]>>x)&1)==0){
			a[i]=0;
		}
	}
	return getmaxx(x-1)+(1<<x);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<getmaxx(30);
	return 0;
}

