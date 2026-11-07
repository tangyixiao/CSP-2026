#include<bits/stdc++.h>
#define int long long
const int N=2e5+5;

using namespace std;
int n,a[N],ans=0,t=0;
char c[N];
string s;
int f(string s,int t) {
	int sum=0;
	int l=0,r=t-1;
	while(l<r) {
		if(s[l]!=s[r]) {
			sum++;
		}
		l++;
		r--;
	}
	return sum;
}

signed main() {
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
	}
	if(n==1||n==0) { //全部字符串都为一个相同的字母 符合回文串
		cout<<0;
		return 0;
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=a[i]; j++) {
			if(i==1&&j==1) {
				s=c[i];
				t++;
			} else {

				t++;
				s+=c[i];
			}
		}
	}
	cout<<f(s,t);
	return 0;
}

