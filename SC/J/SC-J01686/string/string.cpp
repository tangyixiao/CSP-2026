#include<bits/stdc++.h>
using namespace std;
struct aaa{
	long long int a;
	char b;
}a[100001];int t=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s=0,ans=0;char last=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long int x;char y;
		cin>>x>>y;
		s+=x;
		if(y==last)
			a[t].a+=x;
		else a[++t].a=x,a[t].b=y,last=y;
	}
	long long int l=1,r=t;
	while(r>l){
		if(a[l].b==a[r].b){
			if(a[l].a>a[r].a||(a[r].a-=a[l++].a,r-=(!a[r].a?1:0),0))
				a[l].a-=a[r--].a;}
		else
			if(a[l].a>a[r].a||(ans+=a[l++].a,a[r].a-=a[l-1].a,r-=(!a[r].a?1:0),0))
				ans+=a[r--].a,a[l].a-=a[r+1].a;			
	}
	cout<<ans;
//qwq qwq
}