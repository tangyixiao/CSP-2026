#include<bits/stdc++.h>//56
using namespace std;
const int N=2e5+5;
int n,a[N];
long long ans;
char c[N];
string s,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];++j){
			s+=c[i];
		}
	}
	int len=s.size();
	s2=s;
	reverse(s.begin(),s.end());
	for(int i=0;i<len/2;++i){
		if(s2[i]!=s[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}//Trick||Treat! 
