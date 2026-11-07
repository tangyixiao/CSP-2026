#include<iostream>
#include<string>
using namespace std;
string s="";
int cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;
		char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			s+=c;
		}
	}
	string st="";
	for(int i=s.size()-1;i>=0;i--){
		st+=s[i];
	}
	while(st!=s){
		st[cnt]=s[cnt];
		s[s.size()-1-cnt]=st[cnt];
		cnt++;
	}
	cout<<cnt;
	return 0;
	fclose(stdin);
	fclose(stdout);
}