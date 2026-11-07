#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
unsigned long long a[N],ans=0;
bool emp(unsigned long long x,unsigned long long y){
	return x>=y;
}
void fun(int x,int y,unsigned long long z){
	if(y>m){
		ans=max(ans,z);
		return;
	}
	for(int i=x;i<=n-m+y;i++){
		fun(x+1,y+1,z&a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,emp);
	if(m==n){
		ans=2147483647;
		for(int i=1;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==1){
		cout<<a[1];
		return 0;
	}fun(1,1,2147483647);
	cout<<ans;
	
	
	
	return 0;
}