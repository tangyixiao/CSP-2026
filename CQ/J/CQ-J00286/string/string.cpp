#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2*1e5+10;
int n;
struct stu{
	char x;
	int len;
}a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].len>>a[i].x;
	}
	int l=1,r=n;
	int ans=0;
	while(l<r){
		int mi=min(a[l].len,a[r].len);
		a[l].len-=mi;
		a[r].len-=mi;
		if(a[l].x!=a[r].x){
			ans+=mi;
		}
		if(!a[l].len)l++;
		if(!a[r].len)r--;
	}
	cout<<ans;
	return 0;
}
