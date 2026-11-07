#include <bits/stdc++.h>
using namespace std;
deque <int> q;
int n,m,a[500005],b[300005],j;
bool c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= n;i++){
		j=i;
		memset (c,0,sizeof(c)); 
		while (j <= n){
			if (c[a[j]] == 0) q.push_back(a[j]),c[a[j]] = 1;
			else while(q.back() != a[j]){c[q.back()] = 0;q.pop_back();}
			j++;
		}
		while (!q.empty()){b[q.back()]++;q.pop_back();}
	}
	for (int i = 1;i <= m;i++) cout << b[i] << ' ';
	return 0;
}
