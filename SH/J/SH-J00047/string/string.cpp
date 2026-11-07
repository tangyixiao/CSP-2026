#include <iostream>
#include <cstdio>
using namespace std;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	//cout<<s<<endl;
	string s2="";
	for(int i=s.size()-1;i>=0;i--){
		s2+=s[i];
	}
	//cout<<s2<<endl<<endl<<endl;
	int cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=s2[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
