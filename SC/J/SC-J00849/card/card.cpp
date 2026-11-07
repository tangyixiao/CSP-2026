#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int maxn = 5e5 + 10;
inline int read(){
	int res = 0,f = 1; char ch = getchar();
	while (!isdigit(ch)){if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)){res = res * 10 + (ch - '0'); ch = getchar();}
	return res * f;
}
int n,m;
int a[maxn],cnt[maxn],ans[maxn];
stack<int> s;

void solve(int x){
	memset(cnt,0,sizeof(cnt));
	for (int i = x;i <= n;i++){
//		cout << s.top() << endl;
//		if (i == 5){
//			while (!s.empty()) cout << s.top() << " ",s.pop();
//		}
		if (!cnt[a[i]]){
			s.push(a[i]); cnt[a[i]]++;
		}else{
			while (!s.empty() && s.top() != a[i]) cnt[s.top()]--,s.pop();
		}
	}
	while (!s.empty()){
//		cout << s.top() << " ";
		ans[s.top()]++; s.pop();
	}
	return;
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n = read(); m = read();
	for (int i = 1;i <= n;i++) a[i] = read();
	for (int i = 1;i <= n;i++) solve(i);
	for (int i = 1;i <= m;i++) cout << ans[i] << " ";
	return 0;
}