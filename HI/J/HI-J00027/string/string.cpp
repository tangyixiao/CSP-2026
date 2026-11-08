#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],l,r,d,e,t[200005],tt[200005],an;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		r+=a[i];
		t[i]=t[i-1]+a[i];
	}
	r++;
	d=1,e=n;
	while(r-l>=2){
		if(a[d]>a[e]){
			l=l+a[e];
			a[d]-=a[e];
			r=r-a[e];
			if(c[d]!=c[e])an+=a[e];
			e--;
		}else if(a[d]<a[e]){
			l=l+a[d];
			a[e]-=a[d];
			r=r-a[d];
			if(c[d]!=c[e])an+=a[d];
			d++;
		}else{
			l=l+a[d];
			r=r-a[d];
			if(c[d]!=c[e])an+=a[e];
			d++;
			e--;
		}
	}
	cout <<an;
	return 0;
}
