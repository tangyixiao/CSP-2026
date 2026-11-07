#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,mid,ans;
int a[200010],c[200010],l;
string s;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	char g;
	for(int i=1; i<=n; i++) {
		int q;
		char w;
		cin>>q>>w;
		if(i==1) {
			g=w;
			l++;
			a[l]+=q;
			c[l]=w;
		} else {
			if(w==g) {
				a[l]+=q;
			} else {
				g=w;
				l++;
				a[l]+=q;
				c[l]=w;
			}
		}
	}//预处理
	for(int i=1; i<=l; i++) {
		mid+=a[i];
	}
	mid=(mid+1)/2;//最中间
	int p=0,k;
	for(int i=1; i<=l; i++) {
		p+=a[i];
		if(p>=mid) {
			k=i;
			break;
		}
	}
	//p在正中间
	int r=l;//右边
	for(int i=1; i<=k; i++) { //左边
		while(a[i]) { //左边
			if(c[i]!=c[r]) {
				if(a[i]>a[r]) {
					ans+=a[r];
					a[i]-=a[r];
					a[r]=0;
					r--;
				} else if(a[i]<=a[r]) { //不够减
					ans+=a[i];
					a[i]=0;
					a[r]-=a[i];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
