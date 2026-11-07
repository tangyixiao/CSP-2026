#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
struct Strings{
	int cnt;
	char t;
}s[MAXN];
int n,ans;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].cnt>>s[i].t;
		ans+=s[i].cnt;
		if(n%2==1&&n+1/i==2&&n+1%i==0) ans-=s[i].cnt;
		if(n%2==0&&n+2/i==2&&n%i==0){
			if(s[i].cnt<=s[i-1].cnt){
				ans-=s[i].cnt;
				s[i].cnt=0;
				s[i-1].cnt-=s[i].cnt;
			}
			else{
				ans-=s[i-1].cnt;
				s[i-1].cnt=0;
				s[i].cnt-=s[i-1].cnt;
			}
		}
	}
	int l=n/2,r=n/2+1;
	while(1){
		if(l==1||r==n) break;
		if(s[l].cnt==0) l--;
		if(s[r].cnt==0) r++;
		while(s[l].t==s[r].t){
			if(s[l].t==s[r].t){
				if(s[l].cnt<=s[r].cnt){
					ans-=s[l].cnt;
					s[l].cnt=0;
					s[r].cnt-=s[l].cnt;
				}
				else{
					ans-=s[r].cnt;
					s[r].cnt=0;
					s[l].cnt-=s[r].cnt;
				}
			}
			if(s[l].cnt==0) l--;
			if(s[r].cnt==0) r++;
		}
		if(s[l].t!=s[r].t){
			if(s[l].cnt<=s[r].cnt){
				s[l].cnt=0;
				s[r].cnt-=s[l].cnt;
			}
			else{
				s[r].cnt=0;
				s[l].cnt-=s[r].cnt;
			}
		}
		if(s[l].cnt==0) l--;
		if(s[r].cnt==0) r++;
	}
	cout<<ans;
	return 0;
}