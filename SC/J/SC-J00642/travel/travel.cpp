#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
void f(string a,string b,string c,string d){
	if(a!=c){
		cout<<"0000";
		return;
	}cout<<"1";
	if(b[0]!=d[0]||b[1]!=d[1]){
		cout<<"000";
		return;
	}cout<<"1";
	if(b[2]>='A'&&b[2]<='C'){
		if(d[2]=='D'||d[2]=='F'){
			cout<<"00";
			return;
		}cout<<"1";
		if(b[2]+1!=d[2]&&d[2]+1!=b[2]){
			cout<<"0";
			return;
		}cout<<"1";
	}else{
		if(d[2]>='A'&&d[2]<='C'){
			cout<<"00";
			return;
		}cout<<"11";
	}
	return;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>c1>>s1>>c2>>s2;
	f(c1,s1,c2,s2);
	return 0;
}