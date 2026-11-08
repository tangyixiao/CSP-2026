#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char b;
		cin>>a>>b;
		s+=a*b;
	}
	for(int j=0;j<s.length();j++){
		if(s[j] != s[s.length()-1-j]){
			s[s.length()-j]=s[j];
			cnt++;
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
