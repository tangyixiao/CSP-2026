#include<bits/stdc++.h>
#define int long long
#define ll long long
#define fori(a,b) for(int i=a;i<=b;i++)
#define forj(a,b) for(int j=a;j<=b;j++)
using namespace std;
struct Node{
	int num;
	char c;
}a[200010];
string s;
int n,ans;
signed main(){
	ios::sync_with_stdio(0),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	fori(1,n){
		cin>>a[i].num>>a[i].c;
	}
	int l=1,r=n;
	while(l<=r){
		if(a[l].num<=0) l++;
		if(a[r].num<=0) r--;
		int x=min(a[l].num,a[r].num);
		if(a[l].c==a[r].c){
			a[l].num-=x,a[r].num-=x;
		}else{
			a[l].num-=x,a[r].num-=x;
			ans+=x;
		}
	}
	cout<<ans;
	return 0;
}
