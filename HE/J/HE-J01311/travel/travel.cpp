#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ans;
bool f=false;
string a,b;
char x,y;
bool l,r;
string j(string s) {
	string cnt="";
	int i=0;
	while(s[i]>='0'&&s[i]<='9') {
		cnt+=s[i];
		i++;
	}
	return cnt;
}
int main() {
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=j(s1);
	b=j(s2);
	x=s1[2];
	y=s2[2];
	l=(x>='A'&&x<='C');
	r=(y>='A'&&y<='C');
	if(c1==c2){//1
		cout<<'1';
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(a==b) {//2
		cout<<'1';
		f=true;
	} else {
		cout<<"000";
		return 0;
	}
	if(l==r) { //3
		cout<<'1';
	} else {
		cout<<"00";
		return 0;
	}
	cout<<(max(x,y)-min(x,y)==1);//4
	return 0;
}
