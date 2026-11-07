#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
ll n;
ll ans=0;
struct zf{
	ll cnt;
	char c;
}z[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>z[i].cnt>>z[i].c;
	}
	for(int i=1,j=n;i<=j;i++){
		while(z[i].cnt>0){
			if(z[i].cnt>z[j].cnt){
				if(z[i].c==z[j].c){
					z[i].cnt-=z[j].cnt;
					j--;
				}else{
					ans+=z[j].cnt;
					z[i].cnt-=z[j].cnt;
					j--;
				}
			}
			if(z[i].cnt<z[j].cnt){
				if(z[i].c==z[j].c){
					z[i].cnt=0;
					z[j].cnt-=z[i].cnt;
				}else{
					ans+=z[i].cnt;
					z[j].cnt-=z[i].cnt;
					z[i].cnt=0;
				}
			}
			if(z[i].cnt==z[j].cnt){
				if(z[i].c==z[j].c){
					z[i].cnt=0;
					z[j].cnt=0;
					j--;
				}else{
					ans+=z[i].cnt;
					z[i].cnt=0;
					z[j].cnt=0;
					j--;
				}
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}
