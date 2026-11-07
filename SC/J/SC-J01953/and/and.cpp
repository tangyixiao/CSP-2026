#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
const int INF=(1<<30)-1;
typedef unsigned long long ull;
int n,m;
ull a[N];
ull f[N];
bool cmp(int a,int b){
	return a>b;
}
void solve1(){
	int tot[5]={0};
	for(int i=1;i<=n;i++){
		tot[a[i]]++;
	}
	if(tot[4]>=m){
		cout<<4;
		return ; 
	}
	if(tot[3]>=m){
		cout<<3;
		return ; 
	}
	if(tot[2]+tot[3]>=m){
		cout<<2;
		return ; 
	}
	if(tot[1]+tot[3]>=m){
		cout<<1;
		return ; 
	}
	cout<<0;
	return ;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}
	if(n>2000&&a[1]<=4){
		solve1();
		return 0;
	}
	f[0]=INF;
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			f[j]=max(f[j],f[j-1]&a[i]);
			//cout<<i<<" "<<j<<" "<<f[j]<<" "<<f[j-1]<<" "<<a[i]<<" "<<(f[j-1]&a[i])<<'\n'; 
		}
	}
	cout<<f[m];
	return 0;
}