#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e6+10;
ll a[N];
ll n;
char c[N];
ll cntl,cntr;
char cl,cr;
ll ans;
int main(){
	freopen("r","string.in",stdin);
	freopen("w","string.out",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int l=1,r=n;
	cl=c[l],cr=c[r];
	cntl=a[l],cntr=a[r];
	while(l<=n&&r>=l){
		if(cntl>cntr){
			cntl-=cntr;
			if(cl!=cr)ans+=cntr;
			r--;
			cntr=a[r];
			cr=c[r];
		}
		else if(cntl<cntr){
			cntr-=cntl;
			if(cl!=cr)ans+=cntl;
			l++;
			cntl=a[l];
			cl=c[l];
		}
		else {
			if(cl!=cr)ans+=cntl;
			l++,r--;
			if(l<=n&&r>=1){
				cntl=a[l];
				cntr=a[r];
				cl=c[l];
				cr=c[r];
			}
		}
	}
	cout<<ans;
	return 0;
}