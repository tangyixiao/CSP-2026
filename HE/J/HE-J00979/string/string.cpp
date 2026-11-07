#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long a[1000000005];
	char c;
	cin>>n;
	string s;	
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c;
	}
	for(int i=1; i<=n; i++){
		s+=c*a[i];
	}
	int ans=0;
	for(int i=1; i<=s.size(); i++){
		for(int j=s.size(); j>=1; j--){
			if(s[i]==s[j]){
				cout<<0;
			}
			else if(s[i]==s[j]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
