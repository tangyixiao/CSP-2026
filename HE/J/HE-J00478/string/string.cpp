#include <bits/stdc++.h>
using namespace std;
#define int long long
struct node{
	int a;
	char b;
}hw[200010],hw1[100010],hw2[100010];
int n,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin >>x>>c;
		hw[i].a=x,hw[i].b=c;
	}
	int l=1,r=n;
	while(l<=r){
		if(hw[l].b!=hw[r].b){
			ans+=min(hw[l].a,hw[r].a);
		}
		if(hw[l].a<hw[r].a)hw[r].a-=hw[l].a,l++;
		else if(hw[l].a>hw[r].a)hw[l].a-=hw[r].a,r--;
		else l++,r--;
	}
	cout <<ans;
	return 0;
}
