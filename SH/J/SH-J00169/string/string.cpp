#include<iostream>
#define N 200010
using namespace std;
long long ans;
int a[N],n;
char c[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in" ,"r",stdin );
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r){
		int aa=min(a[l],a[r]);
		a[l]-=aa,a[r]-=aa;
		if(c[l]!=c[r])
			ans+=aa;
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout<<ans;
	return 0;
}
