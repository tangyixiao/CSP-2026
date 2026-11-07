#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],c[500010],x;
bool b[500010];
stack<int> s;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) b[j]=0;
		x=i;
		for(int j=i; j<=n; j++) {
			if(b[a[j]]==1) {
				while(s.top()!=a[j]) {
					x--;
					s.pop();
				}
			} else {
				s.push(a[j]);
				b[a[j]]=1;
			}
		}
		for(int j=i; j<=x; j++) {
			c[s.top()]++;
			s.pop();
		}
	}
	for(int i=1; i<=m; i++) cout<<c[i]<<' ';
	return 0;
}
