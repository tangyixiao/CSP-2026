#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	foreopen("travel","r",stdin)
	foreopen("travel","w",stdout)
	string a;
	int b;
	string c;
	int d;
	cin>>a>>b>>c>>d;
	
	if(a!=c){
		cout<<1;
	}
	else if(a==c){
		cout<<0;
	}
	if(b==d){
		cout<<0;
	}
	else if(b!=d){
		cout<<1;
	}
	if(b==d){
		cout<<0;	
	} 
	else if(b!=d){
		cout<<1;
	}
	if(b==d){
		cout<<0;	
	}
	else if(b!=d){
		cout<<1;
	}

	
	
	
	
	
	
	
	return 0;
} 
