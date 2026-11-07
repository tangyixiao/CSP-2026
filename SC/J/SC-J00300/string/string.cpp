#include<bits/stdc++.h>
using namespace std;

using ll=long long;
const int N=2e5+5;
int n;

struct node{
	char  c;
	ll len;
};
node s[N];
ll cnt;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(false);
	cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++){
		ll a;
		cin>>a;
		sum+=a;
		char ch;
		cin>>ch;
		if(s[cnt].c==ch) s[cnt].len+=a;
		else{
			s[++cnt].c=ch;
			s[cnt].len=a;
		}
	}
	
	ll ans=0;
	int l=1,r=n;
	while(l<r){
//		cout<<"L R: "<<l<<' '<<r<<'\n';
		char cho;
		while(s[l].c==s[r].c && l<r && s[l].len==s[r].len){
			l++;
			r--;
		}
		ll rest=0;
		if(s[l].len<=s[r].len){
			cho=s[r].c;
			rest=s[r].len;
			if(s[l].c==s[r].c){
				rest-=s[l].len;
				l++;
			}
			while(l<r && rest>0){
				if(s[l].c==cho){
					if(rest>=s[l].len){
						rest-=s[l].len;
					}
					else{
						s[l].len-=rest;
						rest=0;
					}
				}
				else{
					if(rest>=s[l].len){
						ans+=s[l].len;
						rest-=s[l].len;
					}
					else{
						ans+=rest;
						s[l].len-=rest;
						rest=0;
					}
				}
				l++;
//				cout<<"L: "<<l<<'\n';
			}
		}
		else{
			cho=s[l].c;
			ll rest=s[l].len;
			if(s[l].c==s[r].c){
				rest-=s[r].len;
				r--;
			}
			while(l<r && rest>0){
//				cout<<"L R: "<<l<<' '<<r<<'\n';
				if(s[r].c==cho){
					if(rest>=s[r].len){
						rest-=s[r].len;
					}
					else{
						s[r].len-=rest;
						rest=0;
					}
				}
				else{
					if(rest>=s[r].len){
						ans+=s[r].len;
						rest-=s[r].len;
					}
					else{
						ans+=rest;
						s[r].len-=rest;
						rest=0;
					}
				}
				r--;
//				cout<<"R: "<<r<<'\n';
			}
		}
		if(rest>0){
			ans+=rest;
			break;
		}
//		cout<<"ANS: "<<ans<<'\n';
	}
	
	cout<<ans<<'\n';
	return 0;
}