#include <bits/stdc++.h>
using namespace std;
int n,m,x,sum,er[30];
vector<int>a;
long long ans;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;er[0]=1;
	for (int i=1;i<=29;i++) er[i]=er[i-1]*2;
	for (int i=1;i<=n;i++) {
		scanf("%d",&x);
		a.push_back(x);
	} for (int i=29;i>=0;i--) {
		if (a.size()<m) break;
		vector<int>b; sum=0;
		for (int j=0;j<a.size();j++) {
			if (a[j]&er[i]) {
				b.push_back(a[j]);
				sum++;
			}
		} if (sum>=m) {
			ans+=er[i];
			a=b;
		}
	} cout<<ans;
	return 0;
}
