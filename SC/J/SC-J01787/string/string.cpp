#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
	int n;
	string s;
	char b;
	cin>>n;
	for (int i=1,a;i<=n;i++){
		cin>>a>>b;
		while (a--){
			s+=b;
		}
	}
	ll cut=0,l=s.size();
	for (int i=0;i<l/2;i++){
		if (s[i]!=s[l-i-1]){
			cut++;
		}
	}
	cout<<cut;
	return 0; 
}