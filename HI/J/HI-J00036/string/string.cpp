#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n;
long long ans=0,sum=0;
struct u{
	long long a;
	long long wz;
	char c;
}w[N];
void solve(){
	string s;
	long long xb=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=w[i].a;j++){
			s[++xb]=w[i].c;
		}
	}
	int l=1,r=sum;
	while(l<=r){
		if(s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	return;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i].a>>w[i].c;
		long long t=sum;
		sum+=w[i].a;
		w[i].wz=t+1;
	}
	if(sum<=1e6){
		solve();
		return 0;
	}
	long long l=1,r=sum,l1=1,r1=n;
	while(l<=r){
		if(l1==r1||r1<l1)break;
		if(w[l1].c==w[r1].c){
			long long jj=min(w[l1].wz+w[l1].a-l,r-w[r1].wz+1);
			l+=jj;
			r-=jj;
			if(l>=w[l1+1].wz)l1++;
			if(r<w[r1].wz)r1--;
		}
		else{
			long long jj=min(w[l1].wz+w[l1].a-l,r-w[r1].wz+1);
			ans+=jj;
		//	cout<<l1<<' '<<r1<<' '<<jj<<'\n';
			l+=jj;
			r-=jj;
			if(l>=w[l1+1].wz)l1++;
			if(r<w[r1].wz)r1--;
		}
	}
	cout<<ans;
	return 0;
} 
