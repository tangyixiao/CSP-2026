#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
long long n;
long long mid,l,r,sum,r1,ans,r2;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
//	cout<<LLONG_MAX<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	mid=(sum>>1);
//	cout<<mid;
	l=0;
	r=a[n];
	r1=n;
	for(int i=1; i<=n; i++) {

		long long o=l+a[i];
//		if(o>=mid) {
//			o=mid;
//		}
		while(o>=r) {
			if(c[i]!=c[r1]) {
				ans+=r-r2;
//				cout<<"1111"<<r<<' '<<r2<<endl;
			}
//			if(r==mid)break;
			r1--;
			r2=r;
			r+=a[r1];
//			r=min(r+a[r1],mid);
		}
//		cout<<o<<' '<<r<<endl;
//		cout<<ans<<' '<<o<<' '<<r2<<endl;
//cout<<ans;
//		if(o>=mid&&r>=mid) {
//			cout<<ans;
//			return 0;
//		}
//		cout<<o<<endl;

		if(o>=r2) {
			if(c[i]!=c[r1]){
				ans+=o-r2;
			}
			
			r2=o;
		}
//		l=min(l+a[i],mid);
l+=a[i];
//		cout<<ans<<endl;
	}
	cout<<(ans>>1);
	return 0;
}
//3
//2 a
//2 b
//1 c
//6
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 b
//1000000000 b
//1000000000 b
//5
//1 a
//1 a
//1 a
//1 a
//9 b
//4
//1 a
//2 b
//3 a
//4 b
//abbaaabbbb
//bbbbaaabba
