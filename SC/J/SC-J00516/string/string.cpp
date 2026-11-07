#include<iostream>
#include<cstdio>
#define ll long long 
using namespace std;
struct snode{
	ll num;
	char c;
};
snode a[200006];
ll s[200006];
int n;
int main(){
//	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	
	
	cin>>n;
	s[0]=0;
	ll sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
//		scanf("%lld%c",&a[i].num,&a[i].c);
		s[i]=s[i-1]+a[i].num;
	}
//	for(int i=1;s[i]<(s[n]/2);i++){
//		if(a[i].c!=a[n+1-i].c){
//			sum+=a[i].num;
//		}
//	}
	int l=1,r=n;
	for(ll i=1;i<=s[n];i++){
		if(i>s[l]) l++;
		if(s[n]+1-i <=s[r-1]) r--;
		if(a[l].c!=a[r].c) sum++;
		if(l==r) break;
		if(i>=(s[n]/2)) break;
	}
	
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*

 必须优化！

*/