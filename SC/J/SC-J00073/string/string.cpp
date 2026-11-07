#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200005],ans=0,total=0;
	char c[200005];
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		total+=a[i];
	}
	int l=n;
	bool end=0;
	long long start=0,now=0;
	for(int i=1; now<=total/2; i++) {
		long long length;
		if(now+a[i]<=total/2) length=a[i],now+=a[i];
		else length=total/2-now,end=1;
		while(length>0) {
			if(a[l]-start>length) {
				start+=length;
				if(c[l]!=c[i]) ans+=length;
				length=0;
			} else {
				if(c[i]!=c[l]) ans+=a[l]-start;
				length-=a[l]-start;
				l--;
				start=0;
			}
		}
		if(end) break;
	}
	cout<<ans;
	return 0;
}