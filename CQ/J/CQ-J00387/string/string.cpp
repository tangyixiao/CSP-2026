#include <bits/stdc++.h>
using namespace std;
long long n,a[200000],sum=0,tj[27],m=-100;
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		tj[c[i]-'a'+1]+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	for(int i=1;i<=26;i++){
		if(tj[i]>s.size()/2){
			cout<<s.size()-tj[i];
			return 0;
		}
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			sum++;
		}
	}	
	
		cout<<sum/*<<" "<<s*/;
	return 0;
}
