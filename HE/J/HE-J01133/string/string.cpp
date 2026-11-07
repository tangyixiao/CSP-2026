#include<bits/stdc++.h>
using namespace std;
string reverse(string str){
	string str1="";
	for (int i=str.size()-1;i>=0;i--) str1+=str[i];
	return str1;
}
int main(){
	long long n;
	cin>>n;
	string str="";
	for (int i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for (long long j=0;j<a;j++){
			str+=c;
		}
	}
	long long ans=0;
	for (long long i=str.size()-1;i>=(str.size())/2;i--){
		if (str[i]!=str[str.size()-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
