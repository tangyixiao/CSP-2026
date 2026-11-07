#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string a;
	if(c1==c2){
		a.push_back(1);
	}else{
		a.push_back(0);
	}
	if(c1==c2&&s1==s2){
		a.push_back(1);
	}else{
		a.push_back(0);
	}
	if(c1==c2&&s1==s2&&s1.end()==s2.end()){
		a.push_back(1);
	}else{
		a.push_back(0);
	}
	if(s1.end()+1==s2.end()){
		a.push_back(1);
	}else{
		a.push_back(0);
	}
	cout<<a;
}
