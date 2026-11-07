#include<bits/stdc++.h>
using namespace std;
const long long N=1e8;
string s;
int n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>n;
	for (int i=1;i<=n;i++){
		int a;
		string c;
		cin>>a>>c;
		for (int j=1;j<=a;j++){
			if (a>=1e9){
				cout<<0;
				return 0;
			}
			s+=c;
		}
	}
	for (int i=0,j=s.size()-1;i<=(s.size()-1)/2;i++,j--){
		if (s[i]!=s[j]){
			ans++;
		}
	}
	cout<<ans;
}
