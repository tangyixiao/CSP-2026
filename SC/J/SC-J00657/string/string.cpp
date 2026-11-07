#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;char b[N];long long s,z[N];
int read(){
	char c;int k=0;
	c=getchar();
	while(c>='0'&&c<='9'){
		k=k*10+c-'0';
		c=getchar();
	}
	return k;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		s+=x;
		z[i]=z[i-1]+x;
		cin>>b[i];
	}
	long long ans=0;
	int l=1,r=n;long long ll=0,rr=s;
	while(r>l&&ll<rr){
		if(b[l]!=b[r]){
			long long c,d;
			c=z[l]-ll;d=rr-z[r-1];
			if(c<d){
				ans+=c;
				ll+=c;
				rr-=c;
				l++;
			}
			else if(c>d){
				ans+=d;
				ll+=d;
				rr-=d;
				r--;
			}
			else if(c==d){
				ans+=c;
				ll+=c;
				rr-=c;
				r--;l++;
			}
		}
		else{
			if(z[l]-ll<rr-z[r-1]){
				ll+=z[l]-ll;
				rr-=z[l]-ll;l++;
			}
			else if(z[l]-ll>rr-z[r-1]){
				ll+=rr-z[r-1];
				rr-=rr-z[r-1];r--;
			}
			else{
				ll+=rr-z[r-1];
				rr-=rr-z[r-1];r--;l++;
			}
		}
	}
	cout<<ans;
	return 0;
}