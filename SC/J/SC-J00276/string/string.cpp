#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,man,ans;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;//abcd;abbccdd
	for(ll i=1;i<=n;i++){
		ll a;char c;
		cin>>a;cin>>c;
		man+=a;
		for(ll j=1;j<=a;j++){
			s+=c;
		}
	}//01234
	ll r=man-1;
	if(man%2==0){
		ll yjy=man/2,l=0;
		/*for(int l=0,r;l<=yjy-1,r>=r-yjy+1;l++,r--){
			if(s[l]!=s[r])ans++;
		}*/
		while(l<=yjy-1&&r>=r-yjy+1){
			if(s[l]!=s[r])ans++;
			l++;r--;
		}
	}else{
		int yjy=man/2+1,l=0;
		/*for(int l=0,r;l<yjy-1,r>r-yjy+1;l++,r--){
			if(s[l]!=s[r])ans++;
		}*/
		while(l<yjy-1&&r>r-yjy+1){
			if(s[l]!=s[r])ans++;
			l++;r--;
		}
	}
	cout<<ans;
	return 0;
}
