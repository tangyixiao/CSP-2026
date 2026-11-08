#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	string s_t=s;

	int len=s.size();
	for(int i=1;i<=len;i++){
		if(s[i-1]!=s_t[len-i]){
			return false;
		}
	}
	return true;
}

int main(){
	
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int a;
	cin>>a;
	string s="";
	for(int i=1;i<=a;i++){
		int x;
		string ch;
		cin>>x>>ch;
		for(int i=1;i<=x;i++){
			s+=ch;
		}
		
	}
	int lent=s.size(),i=1;
	
	while(!check(s)){
		
		s[lent-1]=s[0];
		lent--;
		i++;
	
	}

	cout<<i-1;
	

	
	
	
	return 0;
} 
