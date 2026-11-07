#include<iostream>
#include<string>
using namespace std;
int n;
long long v,ans;
char u;
string s,ss;
long long len;
string a,b;

bool is_huiwen(string s){
	ss="";
	for(long long i=0;i<s.size() ;i++){
		ss.push_back(s[s.size() -i-1]);
	}
	if(ss==s)return true;
	else return false;
}

int main(){
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout);
	s="";
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>v>>u;
		for(long long i=0;i<v;i++){
			s.push_back(u);
		}
	}
	
	if(is_huiwen(s)){
		cout<<0;
		return 0;
	}
	
	len=s.length()/2;
	for(long long i=0;i<len;i++){
		a.push_back(s[i]); 
	}
	for(long long i=len+1;i<s.length();i++){
		b.push_back(s[i]); 
	}
	ans=0;
	for(long long i=0;i<a.size();i++){
		if(a[i]!=b[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
//6 1000000000 a 1000000000 a 1000000000 a 1000000000 b 1000000000 b 1000000000 


