#include<bits/stdc++.h>
#define N 1000200
#define S 3000
#define int long long
using namespace std;
bool check1(string str1,string str2){
	if(str1[0]==str2[0] && str1[1]==str2[1]) return true;
	else return false;
}
bool check2(string str1,string str2){
	if(!check1(str1,str2)){return false;}
	else{
		if(str1[2]=='A' || str1[2]=='B' || str1[2]=='C'){
			if(str2[2]=='A' || str2[2]=='B' || str2[2]=='C') return true;
			else return false;
		}
		if(str1[2]=='E' || str1[2]=='F'){
			if(str2[2]=='E' || str2[2]=='F') return true;
			else return false;
		}
	}
}
bool check3(string str1,string str2){
	if(!check1(str1,str2) && !check2(str1,str2)){return false;}
	else{
		if((str1[2]=='A' || str1[2]=='B') && (str2[2]=='A' || str2[2]=='B')) return true;
		else return false;
		if((str1[2]=='B' || str1[2]=='C') && (str2[2]=='B' || str2[2]=='C')) return true;
		else return false;
		if((str1[2]=='E' || str1[2]=='F') && (str2[2]=='E' || str2[2]=='F')) return true;
		else return false;
	}
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){cout<<1;}
	else{cout<<0<<0<<0<<0;return 0;}
	if(check1(s1,s2)){cout<<1;}
	else{cout<<0<<0<<0;return 0;}
	if(check2(s1,s2)){cout<<1;}
	else{cout<<0<<0;return 0;}
	if(check3(s1,s2)){cout<<1;}
	else{cout<<0;return 0;}
	return 0;
}
