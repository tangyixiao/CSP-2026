/*
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
脆香米巧克力真好吃！
*/
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
long long a[N],l[N],r[N],sum,ans;
char c[N];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i=1;i<=n;i++) {
		cin >> a[i] >> c[i];
		l[i]=r[i-1]+1,r[i]=l[i]+a[i]-1;
		sum+=a[i];
	}
	l[n+1]=sum+1;
	long long now1=sum/2,now2=(sum+1)/2+1;
	int k1=-1,k2=-1;
	for (int i=1;i<=n;i++) {
		if (l[i]<=now1&&r[i]>=now1) {
			k1=i;
		} 
		if (l[i]<=now2&&r[i]>=now2) {
			k2=i;
			break;
		} 
	}
	long long ll=now1,rr=now2;
	while (k1>0||k2<=n) {
		if (now1-r[k1-1]<l[k2+1]-now2) {
			if (c[k1]==c[k2]) ans+=ll-r[k1-1];
			rr+=ll-r[k1-1];
			ll=r[k1-1];
			k1--;
		}
		else if (now1-r[k1-1]>l[k2+1]-now2) {
			if (c[k1]==c[k2]) ans+=l[k2+1]-rr;
			ll-=l[k2+1]-rr;
			rr=l[k2+1];
			k2++;
		}
		else {
			if (c[k1]==c[k2]) ans+=l[k2+1]-rr;
			ll=r[k1-1];
			rr=l[k2+1];
			k1--,k2++;			
		}
	}
	cout << now1-ans;
	return 0;
}
