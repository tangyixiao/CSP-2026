#include<bits/stdc++.h>
using namespace std;
struct ll{
	long long val;
	char a; 
}s[200005];
int main (){
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0)->sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].val>>s[i].a;
	}
	long long ans=0;
	long long l=1, r=n;
	long long llen=s[1].val,rlen=s[n].val;
	while(l<r){
		if(llen==0){
			llen+=s[l].val;
		}
		if(rlen==0){
			rlen+=s[r].val;
		}
		long long op=1;
		if(s[l].a==s[r].a){
			op=0;
		}
//		cout<<l<<" "<<r<<" "<<llen<<" "<<rlen<<endl;
		if(llen==rlen){
			ans+=llen*op;
			llen=0;
			rlen=0;
			r--;
			l++;
		}
		if(llen>rlen){
			ans+=rlen*op;
			llen-=rlen;
			rlen=0;
			r--;
		}
		if(llen<rlen){
			ans+=llen*op;
			rlen-=llen;
			llen=0;
			l++;
		}
	}
	cout<<ans;
	return 0;
}