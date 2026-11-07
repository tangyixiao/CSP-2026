#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool tiaojian1(string a,string b){
	if(a[0]==b[0]&&a[1]==b[1]){
		return true;
	}
	return false;
}//同一节车厢？ 
bool tiaojian2(string a,string b){
	if(a[0]==b[0]&&a[1]==b[1]){
		return true;
	}
	return false;
}//同一排？ 
bool tiaojian3(string a,string b){
	if((a[2]<='C'&&b[2]>'C')||(a[2]>'C'&&b[2]<='C'))
	   return false;
	return true;
}//同一侧？ 
bool tiaojian4(string a,string b){
	if(abs(a[2]-b[2])==1) return true;
	return false;
}//相邻？ 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(tiaojian1(c1,c2)) cout<<1;
	else cout<<0;
	if(tiaojian1(c1,c2)&&tiaojian2(s1,s2)) cout<<1;
	else cout<<0;
	if(tiaojian1(c1,c2)&&tiaojian2(s1,s2)&&tiaojian3(s1,s2)) cout<<1;
	else cout<<0;
	if(tiaojian1(c1,c2)&&tiaojian2(s1,s2)&&tiaojian3(s1,s2)&&tiaojian4(s1,s2))
	cout<<1;
	else cout<<0;
	return 0;
}