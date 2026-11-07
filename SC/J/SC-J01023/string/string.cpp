#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int a[MAXN];
char c[MAXN];
int n;
bool check(long long x){
	long long res=0;
	int p=1,q=n;
	long long pa=a[1],qa=a[n];
	char pc=c[1],qc=c[n];
	while(p<q){
		pc=c[p],qc=c[q];
		if(pc==qc){
			if(pa>qa){
				pa-=qa;
				qa=a[--q];
			}else if(pa==qa){
				pa=a[++p],qa=a[--q];
			}else{
				qa-=pa;
				pa=a[++p];
			}
		}else{
			if(pa>qa){
				res+=qa;
				pa-=qa;
				qa=a[--q];
			}else if(pa==qa){
				res+=qa;
				pa=a[++p],qa=a[--q];
			}else{
				res+=pa;
				qa-=pa;
				pa=a[++p];
			}
		}
	}
	return (res<=x);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long r=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		r+=a[i];
	}
	long long l=0;
	while(l<=r){
		long long mid=(l+r)/2;
		if(check(mid))r=mid-1;
		else l=mid+1;
	}
	cout<<l;
	return 0;
}