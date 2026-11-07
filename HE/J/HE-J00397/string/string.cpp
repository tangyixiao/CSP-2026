#include<bits/stdc++.h>
using namespace std;
struct node {
	long long a;
	char b;
} s[200010];
long long n,ll,rr,num;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i].a>>s[i].b;
	}
	node l=s[0],r=s[n-1];
	if(n%2==0) {
		while(ll+rr+2<=n) {
			if(l.b==r.b) {
				if(l.a>r.a) {
					l.a-=r.a;
					rr++;
					r=s[n-rr-1];
				} else if(l.a<r.a) {
					r.a-=l.a;
					ll++;
					l=s[0+ll];
				} else {
					rr++;
					r=s[n-rr-1];
					ll++;
				}
			} else {
				if(l.a>r.a) {
					num+=r.a;
					l.a-=r.a;
					rr++;
					r=s[n-rr-1];
				} else if(l.a<r.a) {
					num+=l.a;
					r.a-=l.a;
					ll++;
					l=s[0+ll];
				} else {
					num+=l.a;
					rr++;
					r=s[n-rr-1];
					ll++;
					l=s[0+ll];
				}
			}
		}
	} else {
		while(ll+rr+1<=n) {
			if(l.b==r.b) {
				if(l.a>r.a) {
					l.a-=r.a;
					rr++;
					r=s[n-rr-1];
				} else if(l.a<r.a) {
					r.a-=l.a;
					ll++;
					l=s[0+ll];
				} else {
					rr++;
					r=s[n-rr-1];
					ll++;
				}
			} else {
				if(l.a>r.a) {
					num+=r.a;
					l.a-=r.a;
					rr++;
					r=s[n-rr-1];
				} else if(l.a<r.a) {
					num+=l.a;
					r.a-=l.a;
					ll++;
					l=s[0+ll];
				} else {
					num+=l.a;
					rr++;
					r=s[n-rr-1];
					ll++;
					l=s[0+ll];
				}
			}
		}
	}
	cout<<num;
	fclose(stdin);
	fclose(stdin);
}
