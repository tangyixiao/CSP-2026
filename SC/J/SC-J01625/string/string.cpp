#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
const int N=2e5+7;
int m,n=0,p=0;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>m;
	int a[m+5]; char c[m+5];
	for(int i=1;i<=m;i++) {
		int sum; char s;
		cin>>sum>>s; p+=sum;
		if(i!=1&&s==c[n-1]) {
			a[n-1]+=sum;
		} else {
			a[n]=sum;
			c[n]=s;
			++n;
		}
	}
	int k1=0,k2=n-1,res=0;
	while(p&&k1!=k2) {
		if(p<=0) break;
		if(c[k1]!=c[k2]) {
			int lo=min(a[k1],a[k2]);
			if(lo>=p) lo=p;
			res+=lo; p-=lo;
			a[k1]-=lo;
			a[k2]-=lo;
			if(a[k1]==0) k1++;
			if(a[k2]==0) {
				if(k2==0) break;
				else k2--;
			}
		}
	}
	cout<<res;
	return 0;
}