#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,sum,ans,maxx=100000000;
struct hw{
	ll a;
	char c;
}s[200005];
string st;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		sum+=s[i].a;
	}
	if(sum>=maxx){
		for(ll i=1;i<=n/2;i++){
		if(s[i].c!=s[n+1-i].c){
			if(s[i].a!=s[n+1-i].a){
				if(s[i].a>s[n+1-i].a){
				ll m=max(s[i].a,s[n+1-i].a);
			ll mi=min(s[i].a,s[n+1-i].a);
			ans+=m-mi;
		    ll fy=m-ans;
			s[i+1].a+=fy;	
				        }
				else {
				ll m=max(s[i].a,s[n+1-i].a);
			ll mi=min(s[i].a,s[n+1-i].a);
			ans+=m-mi;
		    ll fy=m-ans;
			s[n-i].a+=fy;	
	             }        
	      continue;
	         }
	     	ans+=s[i].a;
		}
		else {
		if(n+1-i-i==1){
			continue;
		}                                                                                                                                                    
	      else if(s[i].a!=s[n+1-i].a)	{
	    		if(s[i].a>s[n+1-i].a){
				ll m=max(s[i].a,s[n+1-i].a);
			ll mi=min(s[i].a,s[n+1-i].a);
			ans+=m-mi;
		    ll fy=m-ans;
			s[i+1].a+=fy;	
				}
				else {
				ll m=max(s[i].a,s[n+1-i].a);
			ll mi=min(s[i].a,s[n+1-i].a);
			ans+=m-mi;
		    ll fy=m-ans;
			s[n-i].a+=fy;	
	           }
	           continue;
		    }
		    
		 }
		}
	}
	else {
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=s[i].a;j++){
			    st+=s[i].c;
		}
	}
	ll leng;
	if(sum%2==0)
	 leng=sum/2;
	else 
	 leng=sum/2+1;
	for(ll i=0;i<leng;i++){
		if(st[i]!=st[sum-1-i])
		ans++;
	}	
	}
	cout<<ans;
	return 0;
}
