#include<bits/stdc++.h>
using namespace std;
int n,a[200002];
char c[200002];
long long len,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	for(int l=0,r=0,ll=1,rr=n;ll<rr;){
		if(c[ll]==c[rr]){
			if(a[ll]-l<a[rr]-r){
				r+=a[ll]-l;
				ll++;
				l=0;
			}
			else if(a[ll]-l==a[rr]-r){
				l=r=0;
				ll++;rr--;
			}
			else{
				l+=a[rr]-r;
				rr--;
				r=0;
			}
		}
		else{
			if(a[ll]-l<a[rr]-r){
				ans+=a[ll]-l;
				r+=a[ll]-l;
				ll++;
				l=0;
			}
			else if(a[ll]-l==a[rr]-r){
				ans+=a[rr]-r;
				l=r=0;
				ll++;
				rr--;
			}
			else{
				ans+=a[rr]-r;
				l+=a[rr]-r;
				rr--;
				r=0;
			}
		}
	}
	cout<<ans;
	return 0;
}
