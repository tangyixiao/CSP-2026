#include<bits/stdc++.h>
using namespace std;
long long a[200005],ans=0,s[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
	}long long l=1,r=s[n],ll=1,rr=n;
	while(1){
		if(l>s[ll]) ll++;
		if(r<s[rr-1]+1) rr--;
		long long h=min(s[ll]-l+1,s[rr]-(r-s[rr]+s[rr-1]));
		if(h<=0) h=1;
		if(l>s[ll]) ll++;
		if(r<s[rr-1]+1) rr--;
		if(c[ll]!=c[rr]) ans+=h;
		l+=h;
		r-=h;
		if(l>r||ll==rr) break;
	}cout<<ans;
}