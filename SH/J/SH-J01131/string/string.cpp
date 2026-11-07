#include<bits/stdc++.h>
using namespace std;
long a[200005];
string b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long n,ans=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++){
			s+=b[i];
		}
	}
	long t=s.size()/2;
	for(int k=0;k<t;k++){
		if(s[k]!=s[s.size()-1-k]){
			ans++;
		}
	}
	cout<<ans;
}
