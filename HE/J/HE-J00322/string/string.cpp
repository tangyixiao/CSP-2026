#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
struct ab{
	long long a;
	string b;
}g[N];
bool cmp(long long x,long long y){
	if (g[x].a > g[y].a) return g[x].a > g[y].a;
	return g[x].a < g[y].a;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt = 0,g[N],sum = 0;
	string ans = "";
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> g[i].a >> g[i].b;
		sum += g[i].a;
		sort(g,g+n,cmp);
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < g[i].a;j++){
			ans += g[i].b;
		}
	}
	for (int i = 0;i < ans.length() / 2;i++){
		if (g[i].a != g[sum+1-i].a){
			g[sum + 1 - i] = g[i].a;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
