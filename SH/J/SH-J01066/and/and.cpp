#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int b[200005][35];
bool cmp(int x,int y) {
	return x>y;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxd=0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	sort(a,a+n+1,cmp);
	for(int i=0;i<m;i++) {
		int t=a[i];
		int d=0;
		while(t>0) {
			if(t%2==1) {
				b[i][d]=1;
				t-=1;
			}
			else b[i][d]=0;
			t/=2;
			d++;
			if(t==1) {
				b[i][d]=1;
				break;
			}
		}
		if(d>=maxd) maxd=d;
	}
	long long ans=0;
	for(int i=maxd;i>=0;i--) {
		bool flag=true;
		for(int j=0;j<m;j++) {
			if(b[j][i]==0) flag=false;
		}
		int t=1;
		for(int j=0;j<i;j++) {
			t*=2;
		}
		if(flag==false) ans+=t;
	}
	return 0;
}
