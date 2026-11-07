#include<bits/stdc++.h>
using namespace std;
int s[300001],c[300001],p[300001];
bool st[300001];
vector<int> a,q;
int main () {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,x;
	bool f = true;
	scanf("%d%d",&n,&m);
	for(int i = 0;i < n;i++) {
		scanf("%d",&x);
		a.push_back(x);
		if(st[a[i]] && a[i-1] != a[i]) f = false;
		st[a[i]] = true;
		c[a[i]]++;
	}
	if(f) {
		for(int i = 1;i <= m;i++) p[i] = p[i-1]+c[i];
		for(int i = 1;i <= m;i++) printf("%d ",p[i]);
		return 0;
	}
	for(int i = 0;i < n;i++) {
		q.clear();
		for(int j = 0;j <= n-i;j++) {
			for(int k = 0;k < q.size();k++) {
				if(a[j+i] == q[k]) {
					while(q[q.size()-1] != a[j+i]) q.pop_back();
					q.pop_back();
					break;
				}
			}
			q.push_back(a[j+i]);
		}
		for(int j = 0;j < q.size();j++) s[q[j]]++;
	}
	for(int i = 1;i <= m;i++) printf("%d ",s[i]);
	return 0;
}
