#include <bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int x;
	char c;
}a[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sum=0;
	cin>>a[1].x>>a[1].c;
	int cnt=1;
	for(int i=2;i<=n;i++){
		int xx;
		char cc;
		cin>>xx>>cc;
		if(cc==a[cnt].c){
			a[cnt].x+=xx;
			continue;
		}
		a[++cnt].x=xx;
		a[cnt].c=cc;
	}
	int l=1;
	int r=cnt;
	while(l<=r){
		if(a[l].x<a[r].x){
			if(a[l].c!=a[r].c){
				a[r].x-=a[l].x;
				sum+=a[l].x;
			}
			else a[r].x-=a[l].x;
			l++;
		}
		else{
			if(a[l].c!=a[r].c){
				a[l].x-=a[r].x;
				sum+=a[r].x;
			}
			else a[l].x-=a[r].x;
			r--;
		}
	}
	cout<<sum;
}
