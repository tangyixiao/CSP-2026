#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str1,str2,str3,str4;
char idx1,idx2;
bool is;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>str1>>str2>>str3>>str4;
	if(str1==str3){//question 1
		is=true;
		cout<<1;
	}
	else cout<<0;
	
	if(is && str2.substr(0,2)==str4.substr(0,2)){//question 2
		cout<<1;
	}
	else cout<<0;
	
	idx1=str2[2];//question 3
	idx2=str4[2];
	if(is && str2.substr(0,2)==str4.substr(0,2)){
		if(idx1>='A' && idx1<='C'){
			if(idx2>='A' && idx2<='C') cout<<1;
			else cout<<0;
		}
		else{
			if(idx2>='D' && idx2<='F') cout<<1;
			else cout<<0;
		}
	}
	else cout<<0;
	
	if(is && str2.substr(0,2)==str4.substr(0,2)){
		if(idx1>='A' && idx1<='C'){
			if(idx2>='A' && idx2<='C' && (idx1+1==idx2 || idx2+1==idx1)){
				cout<<1;
			}
			else cout<<0;
		}
		else{
			if(idx2>='D' && idx2<='F' && (idx1+1==idx2 || idx2+1==idx1)) cout<<1;
			else cout<<0;
		}
	}
	else cout<<0;
	return 0;
}