#include<iostream>
#include<string>
using namespace std;
long long n,ans=0;
string s; 
bool check(string ins){
	for(long long i=0;i<ins.size();i++){
		if(ins[i]!=ins[ins.size()-1-i]) return 0;
	}
	return 1;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0); 
	cin>>n;
	for(long long i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	
	if(check(s)){
		cout<<0;
		return 0;
	}
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i])
		{
			ans++;
		}
	}
	
	cout<<ans;
	return 0;
}
