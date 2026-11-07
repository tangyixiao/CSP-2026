#include <bits/stdc++.h>
using namespace std;
#define LL long long
const int N=2e5+5;
struct Node{
	LL num;
	char c;
}s[N];
LL n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(LL i=1;i<=n;i++)cin>>s[i].num>>s[i].c;
	LL stID=1,enID=n;
	while(true){
		if(stID>=enID)break;
		if(s[stID].num==s[enID].num&&s[stID].c==s[enID].c){stID+=1;enID-=1;continue;}
		if(s[stID].num>s[enID].num){
			s[stID].num-=s[enID].num;
			if(s[enID].c!=s[stID].c)ans+=s[enID].num;
			enID-=1;
		}else if(s[stID].num<s[enID].num){
			s[enID].num-=s[stID].num;
			if(s[stID].c!=s[enID].c)ans+=s[stID].num;
			stID+=1;
		}else{
			ans+=s[stID].num;
			stID++;enID--;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
