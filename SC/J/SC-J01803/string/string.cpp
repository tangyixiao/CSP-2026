#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,tot,x,y,z,cnt,ans,mid,mxt,mnt;
struct st{
	ll num;
	char c;
}a[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		tot+=a[i].num;
	}
	tot/=2;
	int l=1,r=n;
	while(tot>0&&l<=n&&r>=1){
		cnt=min(a[l].num,min(tot,a[r].num));
		tot-=cnt;
		if(a[l].c!=a[r].c){
			ans+=cnt;
		}
		a[l].num-=cnt;
		a[r].num-=cnt;
		if(a[l].num==0) l++;
		if(a[r].num==0) r--;
	}
	cout<<ans;
	return 0;
} 