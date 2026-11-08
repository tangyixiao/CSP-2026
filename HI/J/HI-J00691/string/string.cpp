#include<bits/stdc++.h>
using namespace std;
vector<string> s;
long long n,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		long long a;
		cin>>a;
		string c;
		cin>>c;
		for(long long i=0;i<a;i++){
			s.push_back(c);
		}
	}if(s.size()%2==0){
	for(int i=0;i<s.size()/2;i++){
		if(s[i]==s[s.size()-1-i]){
			continue;
		}else{
			ans++;
		}
	}}else{
			for(int i=0;i<s.size()/2+1;i++){
		if(i==s.size()/2){
			break;
		}
		else if(s[i]==s[s.size()-i-1]){
			continue;
		}else{
			ans++;
		}
	}
	}cout<<ans;
	return 0;
}
