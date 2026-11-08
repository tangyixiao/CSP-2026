#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define xt first
#define yt second
using namespace std;
constexpr int N=2e5+5;
ll n;
string a;
pair<ll,char> s[N];
ll res=0,ks=0;
bool flag=0; 
char cks=' ';
void build(ll l,ll r){
	if(s[l].xt>=s[r].xt){
		flag=0;
		if(s[l].yt!=s[r].yt){
			res+=s[r].xt;
			ks=s[l].xt-s[r].xt;
			cks=s[l].yt;
		}else{
			ks=s[l].xt-s[r].xt;
			cks=s[l].yt;
		}
	}else{
		flag=1;
		if(s[l].yt!=s[r].yt){
			res+=s[l].xt;
			ks=s[r].xt-s[l].xt;
			cks=s[r].yt;
		}else{
			ks=s[r].xt-s[l].xt;
			cks=s[r].yt;
		}
	}
	return ;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		ll js;
		char b;
		cin>>js>>b;
		s[i]={js,b};
	}
	build(1,n);
	ll i=1,j=n;
	if(!flag)j--;
	else i++;
	while(i<=j){
		if(ks!=0){
			if(!flag){
				if(s[j].xt>=ks){
					flag=1;
					if(s[j].yt!=cks){
						cks=s[j].yt;
						res+=ks;
						ks=s[j].xt-ks;
					}else{
						ks=s[j].xt-ks;
					}
				}else{
					if(s[j].yt!=cks){
						res+=s[j].xt;
						ks=ks-s[j].xt;
					}else{
						ks=ks-s[j].xt;
					}
				}
			}else{
				if(s[i].xt>=ks){
					flag=0;
					if(s[i].yt!=cks){
						cks=s[i].yt;
						res+=ks;
						ks=s[i].xt-ks;
					}else{
						ks=s[i].xt-ks;
					}
				}else{
					if(s[i].yt!=cks){
						res+=s[i].xt;
						ks=ks-s[i].xt;
					}else{
						ks=ks-s[i].xt;
					}
				}
			}
		}else{
			build(i,j);
		}
		if(ks!=0){
			if(!flag)j--;
			else i++;
		}else{
			j--;
			i++;
		}
	}
	cout<<res<<"\n";
	return 0;
}

