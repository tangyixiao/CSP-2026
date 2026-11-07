#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,len=0,tnt=0;
	string s="";
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		while(a--){
			s+=c;
			len++;
		}
	}
	for(int i=0;i<len/2;i++)
		if(s[i]!=s[len-i-1]) tnt++;
	cout<<tnt;
	return 0;
} 