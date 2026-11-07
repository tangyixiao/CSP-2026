#include<bits/stdc++.h>
using namespace std;
const int MAXN=2*1e5+10;
int n,a,cnt=0;
char c;
char v1[MAXN];
char v2[MAXN];
char v3[MAXN];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
int len=0;
	for(int i=0; i<n; i++) {
		cin>>a>>c;
		len+=a;
		for(int j=0; j<a; j++) {
			v1[i]=c;
		}
	}
	if(len%2==1) {
		int l=len;
		int hfl=(len-1)/2;
		for(int i=0; i<hfl; i++) {
			v2[i]=v1[i];
		}
		for(int i=l-1; i>hfl; i--) {
			v3[l-i]=v1[i];
		}
		for(int i=0; i<hfl; i++) {
			if(v2[i]==v3[i])continue;
			else
			 cnt++;
		}
	} else {
		int l=len;
		int hfl=len/2;
		for(int i=0; i<hfl; i++) {
			v2[i]=v1[i];
		}
		for(int i=l-1; i>=hfl; i--) {
			v3[l-i]=v1[i];
		}
		for(int i=0; i<hfl; i++) {
			if(v2[i]==v3[i])continue;
			else cnt++;
		}
	}
	cout<<cnt;

	return 0;
}
