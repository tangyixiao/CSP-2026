#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200009;
struct Node{
	ll a;
	char c; 
};
ll n,len,midl,r,ans,l,mid;
Node s[N],s1[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		len+=s[i].a;
	}
	l=0;
	mid=len/2;
	ll midi;
	for(ll i=1;i<=n;i++){
		if(l+s[i].a<=mid){
			l+=s[i].a;
			s1[i].a=s[i].a;
			s1[i].c=s[i].c;
			continue;
		}
		s1[i].a=mid-l;
		s1[i].c=s[i].c;
		s1[i+1].a=s[i].a+l-mid;
		s1[i+1].c=s[i].c;
		midi=i;
		break;
	}
	for(ll i=midi+2;i<=n+1;i++){
		s1[i].a=s[i-1].a;
		s1[i].c=s[i-1].c;
	}
	l=1;
	r=n+1;
	while(l<=midi){
		if(s1[l].c==s1[r].c){
			if(s1[l].a==s1[r].a){
				l++;
				r--;
				continue;
			}else if(s1[l].a>s1[r].a){
				s1[l].a-=s1[r].a;
				r--;
				continue;
			}else{
				s1[r].a-=s1[l].a;
				l++;
				continue;
			}
		}
		if(s1[l].a==s1[r].a){
			ans+=s1[l].a;
			l++;
			r--;
			
			continue;
		}else if(s1[l].a>s1[r].a){
			ans+=s1[r].a;
			s1[l].a-=s1[r].a;
			r--;
			
			continue;
		}else{
			ans+=s1[l].a;
			s1[r].a-=s1[l].a;
			l++;
			
			continue;
		}
	}
	cout<<ans;
	return 0;
} 
