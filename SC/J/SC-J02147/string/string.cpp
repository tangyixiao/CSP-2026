#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAX=2e5+5;
string s;
int n,a[MAX],sum=0;
bool f=false;
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		char x;
		cin>>a[i]>>x;
		if(a[i]>500){
			sum+=a[i];
			f=true;
		}else for(int j=1;j<=a[i];j++)s.push_back(x);
	}
	if(f)cout<<sum/2<<'\n';
	else{
		int len=s.size(),cnt=0;
		for(int i=0;i<len/2;i++)if(s[i]!=s[len-i-1])cnt++;
		cout<<cnt<<'\n';
	}
}
#undef int
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T=1;
//  cin>>T;
	while(T--)solve();
	return 0;
}