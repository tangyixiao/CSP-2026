#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
struct Node{
	ll cnt;
	char val;
}s[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].cnt>>s[i].val;
	}
	int i=1,j=n;
	ll ans=0;
	while(i<=j){
		if(s[i].cnt>s[j].cnt){
			if(s[i].val!=s[j].val){
				ans+=s[j].cnt;
			}
			s[i].cnt-=s[j].cnt;
			s[j].cnt=0;
		}
		else{
			if(s[i].val!=s[j].val){
				ans+=s[i].cnt;
			}
			s[j].cnt-=s[i].cnt;
			s[i].cnt=0;
		}		
		if(s[i].cnt==0)i++;
		if(s[j].cnt==0)j--;
	}
	cout<<ans<<"\n";
}
