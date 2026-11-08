#include <bits/stdc++.h>
using namespace std;
struct b {
	long long s;
	string z;
}a[200005];
long long n,ans,j=1,sum,p,m;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i].s>>a[i].z;
		ans+=a[i].s;
	}
		p=n;
		ans=ans-ans%2;
		while(ans>0) {
			if(a[j].z!=a[p].z) {
				if(a[j].s>=a[p].s) {
					ans-=a[p].s*2;
					sum+=a[p].s; 
					a[j].s-=a[p].s;
					if(a[j].s==0) {
                           j++;
					}p--;
				} else {
                  ans-=a[j].s*2;
					a[p].s-=a[j].s;
					sum+=a[j].s;
					j++;
				}
			}else {
				m=min(a[j].s,a[p].s);
				a[j].s-=m;
				a[p].s-=m;
				if(a[j].s==0){
					j++;
				}if(a[p].s==0){
					p--;
				}ans-=m*2;
			}
		}
	cout<<sum;
	return 0;
}

