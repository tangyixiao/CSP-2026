#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=20000005;
int n,m,a[200005],ans,s[M],len,f,cnt[M];
struct X{
	int a;
	int cnt;
}x[200005];
bool cmp(int p,int q){
	return p>q;
}
bool cmp2(const X p,const X q){
	return p.cnt>q.cnt;
}
void to(int n){
	f=true;len=0;int t=n;
	while(t>=1){
		t/=2;
		len++;
	}
	int l=len;t=n;
	for(int i=0;i<M;i++) {s[i]=0;cnt[i]=0;}
	while(t>=1){
		s[l--]=n%2;
		if(n%2==0) f=false;
		if(n%2==1) cnt[n]++;
		t/=2;
	}
}
signed main(){
	freopen("and.in","r",stdio); 
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		x[i].a=a[i];
	}
	sort(a,a+n,cmp);
	if(m==1){
		cout<<a[0];
		return 0;
	}
	int f2=true;
	for(int i=0;i<n;i++){
		to(a[i]);
		if(!f) f2=false;
	}
	if(f2){
		ans=a[0];
		for(int i=1;i<m;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=0;i<n;i++){
			int t=a[i];
			for(int j=i+1;j<n;j++){
				t&=a[j];
				ans=max(ans,t);
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=0;i<n;i++){
		x[i].cnt=cnt[x[i].a];
	}
	sort(x,x+n,cmp2);
	ans=x[0].a;
	for(int i=1;i<m;i++){
		ans&=x[i].a;
	}
	cout<<ans;
	return 0;
} 