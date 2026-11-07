#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],l,ans,y,p,q,s;
char b[20010];
bool c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>b[i];
		l+=a[i];
	}
	y=l,p=1,q=n;
	while(y&&p!=q){
		if(a[p]<a[q]){
			s=a[p];
			c=1;
		}
		else{
			s=a[q];
			c=0;
		}
		a[p]-=s,a[q]-=s,y-=2*s;
		if(b[p]!=b[q]) ans+=s;
		if(c) p++;
		else q--;
	}
	cout<<ans;
	return 0;
}
