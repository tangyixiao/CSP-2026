#include<iostream>
#define int long long 

using namespace std;
bool f(char a,char b){
	if(a==b)return 0;
	if((a=='F'&&b=='D')||(a=='D'&&b=='F'))return 1;
	if(a>='A'&&a<='C'&&b>='A'&&b<='C')return 1;
	return 0;
}
signed main(){
	freopen("trave.in","r",stdin);
	freopen("trave.out","w",stdout);
	string cx,cx1,zh,zh1;
	cin>>cx>>zh>>cx1>>zh1;
	if(cx==cx1)cout<<1;
	else {
		cout<<"0000";
		return 0;	
	}
	if(zh[0]==zh1[0]&&zh[1]==zh1[1])cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	if(f(zh[2],zh1[2]))cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	if(zh[2]+1==zh1[2]||zh[2]-1==zh1[2])cout<<1;
	else cout<<0;
	return 0;
} 
