#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long n,ans,l;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s1+=c;
		}
	}
	s2=s1;
	reverse(s2.begin(),s2.end());
	if(s1==s2){
		cout<<0;
		return 0;
	}
	l=(int)s1.size();
	for(int i=0;i<l/2;i++){
		if(s1[i]!=s2[i])
		ans++;
	}
	cout<<ans;
	return 0;
}
