#include<bits/stdc++.h>
using namespace std;
bool diyi(string a,string c){
	for(int i=0;i<a.size();i++){
		if(a[i]!=c[i]){
			return false;
		}
	}
	return true;
}
bool dier(string b,string d){
	bool f=true;
	for(int i=0;i<b.size()-1;i++){
		if(b[i]!=d[i])
			f=false;
	}
	return f;
}
bool disan(string b,string d){
	bool f=false;
	if((b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')||(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F'))
		f=true;
	return f;
}
bool disi(string b,string d){
	bool f=false;
	if(((b[2]=='A'||b[2]=='C')&&(d[2]=='B'))||(b[2]=='B'&&(d[2]=='A'||d[2]=='C'))||(b[2]>='D'&&b[2]<='F')&&(d[2]>='D'&&d[2]<='F'))
		f=true;
	return f;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(diyi(a,c)){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(dier(b,d))
		cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(disan(b,d))
		cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(disi(b,d))
		cout<<"1";
	else{
		cout<<"0";
	}
	return 0;
}
