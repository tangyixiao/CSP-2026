#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define int ll
const int N=2e5+5;
int n,a[N],s[N];
char c[N];
int len;
int ans;
void solve1(){
	int P=0,p=0;
	for(int i=1;i<=n;i++){
		if(s[i]==len/2+1){
			P=i,p=a[i];
			break;
		}
		if(s[i]>len/2+1){
			P=i;
			p=len/2+1-s[i-1];
			break;
		}
	}
	int L=P,l=p,R=P,r=p;
	while(s[L-1]+l>=1){
		int skip=min(l,a[R]-r+1);
		if(c[L]!=c[R]){
			ans+=skip;
		}
		l-=skip,r+=skip;
		if(l==0){
			L--;
			l=a[L];
		}
		if(r==a[R]+1){
			R++;
			r=1;
		}
	}
	cout<<ans;
	return ;
}
void solve2(){
	int P=0,p=0;
	for(int i=1;i<=n;i++){
		if(s[i]==len/2){
			P=i,p=a[i];
			break;
		}
		if(s[i]>len/2){
			P=i;
			p=len/2-s[i-1];
			break;
		}
	}
	int L=P,l=p,R=P,r=p+1;
	if(r==a[R]+1){
		R++;
		r=1;
	}
	while(s[L-1]+l>=1){
		int skip=min(l,a[R]-r+1);
		if(c[L]!=c[R]){
			ans+=skip;
		}
		l-=skip,r+=skip;
		if(l==0){
			L--;
			l=a[L];
		}
		if(r==a[R]+1){
			R++;
			r=1;
		}
	}
	cout<<ans;
	return ;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		s[i]=s[i-1]+a[i];
	}
	if(len&1)solve1();
	else solve2();
	return 0;
}
/*
*/
