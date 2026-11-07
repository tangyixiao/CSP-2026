#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans,t=32;
int n,m,a[200100],num[200100][40];
bool check(int x){
	int tmp=0;
	for(int i=1;i<=n;i++){
		tmp+=(num[i][x]-num[i][x-1]==1);
	}
	return tmp>=m;
}
bool ccheck(int x){
	int tmp=0;
	for(int i=1;i<=n;i++){
		tmp+=(num[i][t]-num[i][x-1]==t-x+1);
	}
	return tmp>=m;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int x=a[i],k=1;
		while(x!=0){
			num[i][k]=num[i][k-1]+(x%2==1);
			x/=2;
			k++;
		}
	}
	while(!check(t)){
		t--;
	}
	for(int i=t;i>=1;i--){
		if(ccheck(i)){
			ans+=(1<<(i-1));
		}
		else{
			cout<<ans;
			return 0;
		}
	}
	cout<<ans;
	return 0;
}
