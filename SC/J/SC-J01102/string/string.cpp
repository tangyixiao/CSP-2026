#include<bits/stdc++.h>
using namespace std;
#define int long long
int A[200005];
char B[200005];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m=0;
	string s;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>A[i]>>B[i];
		m+=A[i];
	}
	int ans=0;
	if(m%2==0) {
		int x1=1,x2=n;
		int x=A[1],y=A[n];
		while(x1<=x2) {
			if(B[x1]!=B[x2]) {
				ans+=min(x,y);
				if(x>y) {
					x-=y;
					x2--;
					y=A[x2];
				} else {
					if(x<y) {
						y-=x;
						x1++;
						x=A[x1];
					} else {
						x1++;
						x=A[x1];
						x2--;
						y=A[x2];
					}
				}
			} else {
				if(x>y) {
					x-=y;
					x2--;
					y=A[x2];
				} else {
					if(x<y) {
						y-=x;
						x1++;
						x=A[x1];
					} else {
						x1++;
						x=A[x1];
						x2--;
						y=A[x2];
					}
				}
			}
			if(x1>=x2) break;
		}
	} else {
		int a=m;
		int x1=1,x2=n;
		int x=A[1],y=A[n];
		while(x1<=x2) {
			if(B[x1]!=B[x2]) {
				ans+=min(x,y);
				if(x>y) {
					x-=y;
					x2--;
					y=A[x2];
				} else {
					if(x<y) {
						y-=x;
						x1++;
						x=A[x1];
					} else {
						x1++;
						x=A[x1];
						x2--;
						y=A[x2];
					}
				}
			} else {
				if(x>y) {
					x-=y;
					x2--;
					y=A[x2];
				} else {
					if(x<y) {
						y-=x;
						x1++;
						x=A[x1];
					} else {
						x1++;
						x=A[x1];
						x2--;
						y=A[x2];
					}
				}
			}
			if(x1>=x2) break;
		}
	}
	cout<<ans;
	return 0;
}