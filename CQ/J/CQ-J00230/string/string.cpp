#include<bits/stdc++.h>
using namespace std;
struct node{
	long long a;
	char c;
}a[200005];
long long n;
long long ans;
long long find0(long long l,long long r){
	while(l<=r){
		long long mid=(l+r)/2;
		if(a[mid].a!=0){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return r;
}
void bs(long long i){
	for(long long j=find0(i,n-1);j>=i;j--){
		long long m=min(a[i].a,a[j].a);
		if(a[i].c!=a[j].c){
			ans+=m;
		}
		a[i].a-=m;
		a[j].a-=m;
		if(a[i].a<=0){
			break;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//  freopen("stringtest.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i].a>>a[i].c;
	}
	for(long long i=0;i<n;i++){
		if(a[i].a){
			bs(i);
		}
		else{
			cout<<ans;
			return 0;
		}
	}
	cout<<ans;
	return 0;
} 
/*
7
2 a
3 b
7 c
6 b
2 c
4 b
7 a
*/
