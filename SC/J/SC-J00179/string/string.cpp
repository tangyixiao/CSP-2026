#include<bits/stdc++.h>
using namespace std;
long long n,ans=0;
long long l,r;
string s="";
struct node{
	long long a;
	char c;
}f[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int i;
	cin>>n;
	l=1;r=n;
	for(i=1;i<=n;i++){
		scanf("%lld%s",&f[i].a,&f[i].c);
	}
	while(l<r){
		long long m=min(f[l].a,f[r].a);
		if(f[l].c!=f[r].c){
			ans+=m;
		}
		f[l].a-=m,f[r].a-=m;
		if(f[l].a==0){
			l++;
		}else{
			r--;
		}
	}
	cout<<ans;
	return 0;
}