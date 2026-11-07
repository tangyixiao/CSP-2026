#include<bits/stdc++.h>
#define int long long
using namespace std;

struct str{
	int a;
	char c;
}Str[200004];
int n,ans;

struct df{
	bool side;
	int ll;
	char ch;
}DF;

void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>Str[i].a>>Str[i].c;
	}
	int l=2,r=n;
	DF.ll=Str[1].a;
	DF.ch=Str[1].c;
	DF.side=0;
	while(1){
//		cout<<l<<' '<<r<<' '<<DF.side<<' '<<DF.ll<<' '<<DF.ch<<' '<<ans<<'\n';
		if(l==r){
			ans+=((DF.ch==Str[l].c)?0:min(DF.ll,Str[l].a));
			break;
		}
		if(!DF.side){
			int len=Str[r].a;
			int cha=Str[r].c;
			if(DF.ll<len){
				ans+=(DF.ch==cha)?0:DF.ll;
				DF.side=1;
				DF.ll=len-DF.ll;
				DF.ch=cha;
			}else{
				ans+=(DF.ch==cha)?0:len;
				DF.ll=DF.ll-len;
			}
			r--;
		}else{
			int len=Str[l].a;
			int cha=Str[l].c;
			if(DF.ll<len){
				ans+=(DF.ch==cha)?0:DF.ll;
				DF.side=0;
				DF.ll=len-DF.ll;
				DF.ch=cha;
			}else{
				ans+=(DF.ch==cha)?0:len;
				DF.ll=DF.ll-len;
			}
			l++;
		}
	}
	cout<<ans<<'\n';
}

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _T=1;//cin>>_T;
	while(_T--){
		solve();
	}
}
