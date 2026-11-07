#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int n;
long long a[200050],half,ans;
char c[200050];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		half+=a[i];
	}
	half/=2;
	int l=1,r=n;
	long long cntl=a[l],cntr=a[r],hl=a[l],hr=a[r];
	while(hl<=half&&hr<=half&&l<=r) {
		if(c[l]!=c[r]) {
			ans+=min(cntl,cntr);
		}
		if(cntl<cntr) {
			cntr-=cntl;
			++l;
			cntl=a[l];
			hl+=a[l];
			if(hl>half) {
				cntl-=hl-half;
				hl-=hl-half;
			}
		} else if(cntr<cntl) {
			cntl-=cntr;
			--r;
			cntr=a[r];
			hr+=a[r];
			if(hr>half) {
				cntr-=hr-half;
				hr-=hr-half;
			}
		} else {
			++l,--r;
			cntl=a[l],cntr=a[r];
			hl+=a[l],hr+=a[r];
			if(hl>half) {
				cntl-=hl-half;
				hl-=hl-half;
			}
			if(hr>half) {
				cntr-=hr-half;
				hr-=hr-half;
			}
		}
	}
	cout<<ans;
	return 0;
}