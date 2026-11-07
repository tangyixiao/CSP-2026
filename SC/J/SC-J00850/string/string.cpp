#include<bits/stdc++.h>
using namespace std;
struct qwe{
	int w;char s;
}qw[1000000];
long long q;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&q);
	long long a=0;
	for(long long i=1;i<=q;i++)cin>>qw[i].w>>qw[i].s;
	long long l=1,r=q;
	while(l<r){
		if(qw[l].s==qw[r].s){
			if(qw[l].w==qw[r].w)l++,r--;
			else if(qw[l].w>qw[r].w)qw[l].w-=qw[r].w,r--;
			else qw[r].w-=qw[l].w,l++;
		}else{
			if(qw[l].w==qw[r].w)a+=qw[l].w,l++,r--;
			else if(qw[l].w>qw[r].w)a+=qw[r].w,qw[l].w-=qw[r].w,r--;
			else a+=qw[l].w,qw[r].w-=qw[l].w,l++;
		}
	}
	cout<<a;
	return 0;
}