#include<bits/stdc++.h>
using namespace std;
//忘记子串长度函数是啥了
//没湿自己写 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	int len=0; 
	string s="";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int j;
		cin>>j;
		len+=j;
		char c;
		cin>>c;
		for(int k=0;k<j;k++){
			s+=c;
		} 
	}
	int oper=0;
	for(int i=0;i<=len/2;i++){
		if(s[i]!=s[len-i-1]) oper++;
	}
	cout<<oper;
	return 0;
} 
