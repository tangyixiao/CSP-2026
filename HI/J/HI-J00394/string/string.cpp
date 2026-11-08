#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=1; i<=n; i++){
		int a;
		char c;
		cin>>a>>c;
		for(int b=1; b<=a; b++){
			s=s+c;
		} 
	}
	int sum=0,c=s.length()-1;
	for(int i=0; i<s.length()/2; i++){
		if(s[i]!=s[c]){
			sum++;
		}
		c--;
	}
	cout<<sum;
	return 0;
}
