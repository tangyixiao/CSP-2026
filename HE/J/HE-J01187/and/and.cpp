#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
int n,m;
ll a[N],ans;
bool cmp(ll x,ll y){
	return x>y;
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;   
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++){
		 ans&=a[i];
	}
	cout<<ans; 
	return 0; 
}

/*

check ³ÌÐò
while(1){
		int a,b;
		cin>>a>>b;
		a&=b;
		cout<<a;
	}
 
RP++; 
*/



