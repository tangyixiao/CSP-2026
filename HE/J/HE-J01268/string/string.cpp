#include<bits/stdc++.h>
using namespace std;
string s,c[200005];
long long n,ans,a[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>c[i];
		for(int j=s.size();j<a[i];j++){
			s+=c[i];
		}
	}
	for(int i=n;i>0;i--){
		if(s[n-i]!=s[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
