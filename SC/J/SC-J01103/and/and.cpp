#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long LL;
LL n,m,a[N],ans;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,greater<int>());
	ans=a[0];
	for(int i=1;i<m;i++){
		ans&=a[i];
	}
	cout<<ans;
	fclose(stdin); fclose(stdout);
	return 0;
}