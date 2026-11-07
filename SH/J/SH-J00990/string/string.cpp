#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
struct st{
	int len;
	char c;
};
const int N=2e5+5;
st s1[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>s1[i].len>>s1[i].c;
	}
	int ans=0;
	for (int i=1;i<=n;i++){
		if(s1[i].len<s1[n].len){
			int l=s1[i].len;
			s1[n].len-=l;
			if(s1[i].c!=s1[n].c)ans+=l;
		}
		else{
			int l=s1[n].len;
			s1[i].len-=l;
			if(s1[i].c!=s1[n].c)ans+=l;
			i--;
			n--;
		}
	}
	cout<<ans;
	return 0;
}
