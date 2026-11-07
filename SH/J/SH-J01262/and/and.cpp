#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
long long n,m,ans=-INT_MAX*10;
long long a[N];
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<=n;i++) cin>>a[i];
	sort(a,a+n,cmp);
	ans=a[0];
	for(int i=1;i<m;i++){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
} 
