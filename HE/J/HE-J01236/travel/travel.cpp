#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
		string x,y,x1,y1;

	cin>>x>>y>>x1>>y1;
	if(x==x1){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	string a=y.substr(2,0);
	string b=y1.substr(2,0);
	if(a==b){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	
	string c=y.substr(1,1);
	string d=y1.substr(1,1);
	if(c==d){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	string e=c, f=d;
	
	if(y[2]+1==y1[2]||y1[2]+1==y[2]){
		cout<<1; 
	}
	else{
		if(e=="D"&&f=="F"){
			cout<<"1";
		}
		else{
			if(e=="C"&&f=="D"){
				cout<<"0";
			}
		
			else{
				cout<<"0";
			}	
		}
	}
	
	return 0;
} 
