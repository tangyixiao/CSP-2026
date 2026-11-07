#include<bits/stdc++.h>
using namespace std;
int a,b,n,m;
string s,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>n>>s>>b>>m>>c;
	if(a!=b){
		cout<<"0000";
	}else if(s=="A"&&c=="B"||s=="B"&&c=="C"||s=="D"&&c=="F"&&a==b&&n==m){
		cout<<"1111";
	}else if(s=="C"&&c=="A"||s=="A"&&c=="C"&&a==b&&n==m){
		cout<<"1110";
	}else if(c=="D"||c=="F"&&s!="F"||s!="D"&&a==b&&n==m){
		cout<<"1100";
	}else{
		cout<<"1000";
	}
	return 0;
} 
