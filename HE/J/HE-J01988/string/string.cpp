#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define num first
const int N = 2e5 + 10;
int n,now,p1,p2;
LL x;
char c;
pair<int,char> a[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> x >> c;
		a[i] = {x,c};
	}
	p1 = 1,p2 = n;
	LL ans = 0;
	while(p1 != p2){
		now = min(a[p1].num,a[p2].num);
		if(a[p1].second != a[p2].second)ans += now;
		a[p1].num -= now,a[p2].num -= now;
		if(a[p1].num <= 0)p1 ++;
		if(a[p2].num <= 0)p2 --;
	}
	cout << ans << endl;
	return 0;
}

