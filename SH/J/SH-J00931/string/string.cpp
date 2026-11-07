#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long len;
		char a;
		cin>>len>>a;
		for(int j=1;j<=len;j++){
			s+=a;
		}
	}
//	cout<<s<<endl;
	long long ans=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-1-i]){
//			cout<<i<<" "<<s.size()-1-i<<endl;
			ans++;
		}
	}
	cout<<ans/2<<endl;
	return 0;
}
