#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n,lst,cnt,ans;
struct node{
	int x,l,r;
	char c;
}a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].x >> a[i].c;
		a[i].l = lst + 1;
		a[i].r = lst + a[i].x;
		lst = a[i].r;
		cnt += a[i].x;
	}
	int i = 1,j = n;
	lst = 0;
	while(i < j){
		if(a[i].c != a[j].c)ans += min(a[i].r - lst,cnt - a[j].l - lst + 1);
		lst = min(a[i].r,cnt - a[j].l + 1);
		if(a[i].r < cnt - a[j].l + 1)i++;
		else j--;
	}
	cout << ans << endl;
	return 0;
}
