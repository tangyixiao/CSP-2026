#include<bits/stdc++.h>
using namespace std;
int n,wq,wh;
long long a[200001],ans=0;
char c[200001];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
	}
	wq=1;
	wh=n;
	while(wq<wh) {
		bool den=1;
		if(c[wq]==c[wh]) {
			den=0;
		}
		if(a[wq]>a[wh]) {
			if(den){
				ans+=a[wh];
			}
			a[wq]-=a[wh];
			wh--;
		} else if(a[wq]<a[wh]) {
			if(den){
				ans+=a[wq];
			}
			a[wh]-=a[wq];
			wq++;
		} else if(a[wq]==a[wh]) {
			if(den){
				ans+=a[wq];
			}
			wh--;
			wq++;
		}
	}
	cout<<ans;
	return 0;
}
