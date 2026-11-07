#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node {
	int li,c;
} a[500010];
ll as[500010];
ll df[500010];

ll n,m;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	cin>>n>>m;
	memset(as,0,sizeof(as));
	memset(df,0,sizeof(df));
	for(int i=1; i<=n; i++) {
		cin>>a[i].c;
		a[as[a[i].c]].li=i;
		as[a[i].c]=i;
	}
	bool sad[m+5];
	for(int i=1; i<=n; i++) {
		//cout<<a[i].li<<endl;
	}
	for(int i=1; i<=n; i++) {
		memset(sad,0,sizeof(sad));
		for(int j=i; j<=n; j++) {
			if(a[j].li!=0) {
				j=a[j].li-1;
				//cout<<j<<"fy"<<endl;
			}
			else {
				sad[a[j].c]=1;
				//cout<<a[j].c<<endl;
			}
		}
		for(int j=1; j<=m; j++) {
			if(sad[j]==1) {
				df[j]++;
			}
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<df[i]<<' ';
	}
	return 0;
}