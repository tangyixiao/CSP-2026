#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,c2,s1,s2;
bool check1(string a,string b){
	if(a==b) return 1;
	else return 0;
}
bool check2(string a,string b){
	bool v=1;
	for(int i=0;i<=1;i++){
		if(a[i]!=b[i]) v=0;
	}
	return v;
}
bool check3(string a,string b){
	char a1=a[2],b1=b[2];
	if(a1<'D'&&b1<'D') return 1;
	if(a1>'C'&&b1>'C') return 1;
	return 0;
}
bool check4(string a,string b){
	char a1=a[2],b1=b[2];
	if(a1-b1==1) return 1;
	if(b1-a1==1) return 1;
	return 0;
}
int main(){
	cin>>c1>>s1>>c2>>s2;
	if(check1(c1,c2)) cout<<"1";
	else cout<<"0";
	if(check1(c1,c2)&&check2(s1,s2)) cout<<"1";
	else cout<<"0";
	if(check1(c1,c2)&&check2(s1,s2)&&check3(s1,s2)) cout<<"1";
	else cout<<"0";
	if(check1(c1,c2)&&check2(s1,s2)&&check4(s1,s2)&&check3(s1,s2)) cout<<"1";
	else cout<<"0";
	return 0;
}
