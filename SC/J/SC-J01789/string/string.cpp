#include<bits/stdc++.h>
using namespace std;
int n,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		while(a--){
			s+=c;
		}
	}
//	for(int i=0;i<=s.size()-1;i++){
//		cout<<s[i];
//	}
	int l=0,r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}