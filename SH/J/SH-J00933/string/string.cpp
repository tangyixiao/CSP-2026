#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,len;
struct node{
	ll num;
	char c;
}s[200010];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].num>>s[i].c;
		len+=s[i].num;
	}
	ll l=1,r=n,cnt=0;
	while(l<=r){
		if(s[l].c!=s[r].c){
			if(s[l].num<s[r].num){
				cnt+=s[l].num;
				s[r].num-=s[l].num;
				s[l].num=0;
				l++;
			}
			else if(s[l].num>s[r].num){
				cnt+=s[r].num;
				s[l].num-=s[r].num;
				s[r].num=0;
				r--;
			}
			else{
				cnt+=s[r].num;
				s[r].num=0;
				s[l].num=0;
				l++;
				r--;
			}
		}
		else{
			if(s[l].num<s[r].num){
				s[r].num-=s[l].num;
				s[l].num=0;
				l++;
			}
			else if(s[l].num>s[r].num){
				s[l].num-=s[r].num;
				s[r].num=0;
				r--;
			}
			else{
				s[r].num=0;
				s[l].num=0;
				l++;
				r--;
			}
		}
	}
	cout<<cnt;
	return 0;
}
