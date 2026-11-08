#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
struct node{
	int len;
	char ch;
};
const int N=2e5+10;
node a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].len>>a[i].ch;
	int l=1,r=n;
	int ans=0;
	while(l<r){
		if(a[l].ch==a[r].ch){
			if(a[l].len>a[r].len){
				a[l].len-=a[r].len;
				r--;
			}
			if(a[l].len<a[r].len){
				a[r].len-=a[l].len;
				l++;
			}
			if(a[l].len>a[r].len){
				l++,r--;
			}
		}
		if(a[l].ch!=a[r].ch){
			if(a[l].len>a[r].len){
				a[l].len-=a[r].len;
				ans+=a[r].len;
				r--;
			}
			if(a[l].len<a[r].len){
				a[r].len-=a[l].len;
				ans+=a[l].len;
				l++;
			}
			if(a[l].len>a[r].len){
				ans+=a[l].len;
				l++,r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
