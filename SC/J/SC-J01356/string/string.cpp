#include<bits/stdc++.h>
using namespace std;

const int N=200100;
long long n,a[N],c;
bool f=true;
string o[N],s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>o[i];
		for(int j=0;j<a[i];j++){
			s=s+o[i];
		}
	}
	for(int i=0;i<=s.size();i++){
		if(s[i]!=s[s.size()-i-1]&&i<=s.size()/2){
			f=false;
			c++;
		}
	}
	if(f) cout<<"0";
	else cout<<c;
	return 0;
}