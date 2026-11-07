#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
namespace my{
	int main(){
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
		string S;unsigned ll n,ans=0;
		cin>>n;
		for(unsigned ll i=0;i<n;i++){
			unsigned ll a;char c;
			cin>>a>>c;
			for(unsigned ll i=0;i<a;i++)
				S+=c;
		}
		string Sr=S;reverse(Sr.begin(),Sr.end());
		for(unsigned ll i=0;i<S.size();i++)
			if(S[i]!=Sr[i])ans++;
		ans/=2;cout<<ans;
		return 0;
	}
}
int main(){
	my::main();
	return 0;
}