#include<bits/stdc++.h>
using namespace std;
long long n,ans;
vector<char> s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long a;
		char c;
		cin>>a>>c;
		while(a--){
			s.push_back(c);
		}
		
	}
	long long l=s.size();
	for(long long i=0;i<=l/2-1;i++){
		if(s[i]!=s[l-i-1]){
			ans++;
		}
	}
	cout<<ans;
	

} 
