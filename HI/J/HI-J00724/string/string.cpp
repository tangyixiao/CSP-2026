#include<bits/stdc++.h>
using namespace std;
const int N=1e8+10;
#define ll long long
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	string sa;
	for(int i=1;i<=n;i++){
		int l;
		cin>>l;
		char s;
		cin>>s;
		while(l--){
			sa+=s;
		}
	}
	ll ch=sa.size();
	ll ans=0;
	for(int i=0;i<ch/2;i++){
		if(sa[i]!=sa[ch-1-i]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}


