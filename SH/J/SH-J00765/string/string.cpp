#include<iostream>
using namespace std;
const int maxN=200002;
long long a[maxN],p[maxN];
char c[maxN];
int abs(int x){
	return (x>=0?x:-x);
}
int func1(long long s1,long long e1,long long s2,long long e2){
	long long s=max(s1,s2),e=min(e1,e2);
	return ((e-s)>0?(e-s):0);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		p[i]=p[i-1]+a[i];
	}
	long long l=1,r=n,sL,eL,sR,eR,ans=0;
	while (l<=r){
		sL=p[l-1];eL=p[l];
		sR=p[n]-p[r];eR=p[n]-p[r-1];
		//cerr<<"L:"<<l<<" s:"<<sL<<" e:"<<eL<<endl;
		//cerr<<"R:"<<r<<" s:"<<sR<<" e:"<<eR<<endl;
		if (c[l]!=c[r]){
			ans+=func1(sL,eL,sR,eR);
		}
		if (eL<eR) l++;
		else if (eL>eR) r--;
		else{
			l++;r--;
		}
		//cerr<<"L:"<<l<<" R:"<<r<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
