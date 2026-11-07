#include<bits/stdc++.h>
using namespace std;
const int N=2e5+50;
#define ll long long
int n;
ll si,cnt,ans;
ll a[N],b[N];
char c[N];
string str,r_str;
int main () {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i]>>c[i],b[i]=a[i],si+=a[i];
	ll j=n;
	for(int i=1; i<=n;) {
		if(c[i]==c[j]) {
			if(a[i]>b[j]) {
				cnt+=b[j];
				a[i]-=b[j];
				j--;
			} else if(a[i]==b[j]) {
				cnt+=a[i];
				i++,j--;
			} else {
				cnt+=a[i];
				b[j]-=a[i];
				i++;
			}
		}
		if(c[i]!=c[j]) {
			if(a[i]>b[j]) {
				cnt+=b[j];
				a[i]-=b[j];
				ans+=b[j];
				j--;
			} else if(a[i]==b[j]) {
				cnt+=a[i];
				ans+=a[i];
				i++,j--;
			} else {
				cnt+=a[i];
				b[j]-=a[i];
				ans+=a[i];
				i++;
			}
		}
	}
	cout <<ans/2 <<endl;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
  */
