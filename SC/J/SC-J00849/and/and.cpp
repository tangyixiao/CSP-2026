#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int maxn = 2e5 + 10;
inline int read(){
	int res = 0,f = 1; char ch = getchar();
	while (!isdigit(ch)){if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)){res = res * 10 + (ch - '0'); ch = getchar();}
	return res * f;
}
int n,m,ans = 0;
int a[maxn];

void dfs(int s,int sum,int pos){
	if (pos > m) return;
	if (s == n){
		if (m == pos) ans = max(ans,sum);
		else if (m == pos + 1) ans = max(ans,(sum & a[s]));
		return;
	}
	if (pos == m){
		ans = max(ans,sum); return;
	}
	dfs(s + 1,sum & a[s],pos + 1);
	dfs(s + 1,sum,pos);
	return;
}

int count1(int s){
	int sum = 0,tot = 1;
	while (s > 0){
		if (s & 1) sum += tot;
		s >>= 1; tot++;
	}
	return sum;
}

int count2(int s){
	int sum = 0;
	while (s > 0){
		if (s & 1) sum++;
		s >>= 1;
	}
	return sum;
}

int cmp1(int s,int t){
	int cs = count1(s),ct = count1(t);
	if (cs == ct) return s > t;
	else return cs > ct;
}

int cmp2(int s,int t){
	int cs = count2(s),ct = count2(t);
	if (cs == ct) return s > t;
	else return cs > ct;
}

int cmp3(int s,int t){
	return s > t;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n = read(); m = read();
	int s = 0;
	for (int i = 1;i <= n;i++) a[i] = read(),s = max(s,a[i]);
	if (n <= 20){
		dfs(1,s,0);
		cout << ans;
		return 0;
	}
	sort(a + 1,a + n + 1,cmp1);
	int ans1 = a[1];
	for (int i = 1;i <= m;i++) ans1 &= a[i];
	sort(a + 1,a + n + 1,cmp2);
	int ans2 = a[1];
	for (int i = 1;i <= m;i++) ans2 &= a[i];
	sort(a + 1,a + n + 1,cmp3);
	int ans3 = a[1];
	for (int i = 1;i <= m;i++) ans3 &= a[i];
	cout << max(ans1,max(ans2,ans3));
	return 0;
}