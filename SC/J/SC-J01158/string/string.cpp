#include<bits/stdc++.h>

using namespace std;
long long n,k=1,sum,ans;
struct P {
	long long a;
	char b;
} p[1000005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cin>>p[1].a>>p[1].b;
	for(long long i=2; i<=n; i++) {
		long long t;
		char st;
		cin>>t>>st;
		if(p[k].b==st) {
			p[k].a+=t;
		} else {
			k++;
			p[k].a=t;
			p[k].b=st;
		}
		sum+=t;
	}
	long long t;
	long long l=1;
	long long r=k;
	while(l<=r) {
		if(p[l].b!=p[r].b) {
			t=min(p[l].a,p[r].a);
			ans+=t;
			p[l].a-=t;
			p[r].a-=t;
			if(p[l].a>p[r].a) {
				r--;
			} else {
				l++;
			}
		} else {
			if(p[l].a==p[r].a) {
				l++;
				r--;
			} else {
				t=min(p[l].a,p[r].a);
				p[l].a-=t;
				p[r].a-=t;
				if(p[l].a>p[r].a) {
					r--;
				} else {
					l++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
