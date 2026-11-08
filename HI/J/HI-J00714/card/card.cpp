#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;
const int N = 501000;

int n,m,a[N],ans[N],cnt[N];

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int i = 1;i <= n;i++) scanf("%d",&a[i]);
	for (int i = 1;i <= n;i++) {
		memset(cnt,0,sizeof(int)*(m+1));
		stack <int> s;
		for (int j = i;j <= n;j++) {
			if (cnt[a[j]]) {
				int t = 0;
				while (t != a[j]) {
					t = s.top();
					s.pop();
					cnt[t]--;
				}
				s.push(a[j]);
				cnt[a[j]]++;
			} else {
				s.push(a[j]);
				cnt[a[j]]++;
			}
		}
		while (s.size()) {
			ans[s.top()]++;
			s.pop();
		}
	}
	for (int i = 1;i <= m;i++) printf("%d ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
