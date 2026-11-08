#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],c[500005],cnt[500005];
stack<long long> s;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(long long i=1; i<=n; i++) {
		for(long long j=i; j<=n; j++) {
			if(cnt[a[j]]==1) {
				while(1) {
					if(s.top()==a[j]) break;
					else {
						cnt[s.top()]--;
						s.pop();
					}
				}
			} else {
				cnt[a[j]]++;
				s.push(a[j]);
			}
		}

		while(!s.empty()) {
			c[s.top()]++;
			cnt[s.top()]--;
			s.pop();
		}
	}
	for(long long i=1; i<=m; i++) {
		cout<<c[i]<<" ";
	}
	return 0;
}

