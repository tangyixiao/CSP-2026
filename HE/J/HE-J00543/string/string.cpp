#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
ll n,a[N],ans;
char c[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	string temp;
	for(int i=s.size()-1;i>=0;i--){
		temp+=s[i];
	}
	if(temp==s){
		cout<<0;
		return 0;
	}else{
		for(int i=0;i<s.size();i++){
			if(s[s.size()-(i+1)]==s[i]){
				break;
			}
			s[s.size()-(i+1)]=s[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
