#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
string c1,c2,s1,s2;
bool check1(string a,string b){
	if(a[2] == 'A' && b[2] == 'B' || a[2] == 'A' && b[2] == 'C')return true;
	if(a[2] == 'B' && b[2] == 'A' || a[2] == 'B' && b[2] == 'C')return true;
	if(a[2] == 'C' && b[2] == 'A' || a[2] == 'C' && b[2] == 'B')return true;
	if(a[2] == 'D' && b[2] == 'F' || a[2] == 'F' && b[2] == 'D')return true;
	return false;
}
bool check2(string a,string b){
	//cout<<a<<b;
	int ta = a[2]-'A',tb = b[2]-'A';
	if((ta == tb + 1 || ta == tb - 1) && (a[2] != 'C' && b[2] != 'D') && (a[2] != 'D' && b[2] != 'C')){
		return true;
	}
	if((a[2] == 'D' && b[2] == 'F') || (a[2] == 'F' && b[2] == 'D'))return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	//cout<<c1<<' '<<c2<<' '<<s1<<' '<<s2;
	//cout<<(c1 == c2);
	//cout<<(s1[0] == s2[0] && s1[1] == s2[1]);
	//cout<<check1(s1,s2);
	//cout<<"falg";
	if(c1 == c2/*true*/){
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			if(check1(s1,s2)){
				if(check2(s1,s2)){
					cout<<"1111";
					return 0;
				}
				else{
					cout<<"1110";
					return 0;
				}
			}
			else{
				cout<<"1100";
				return 0;
			}
		}
		else{
			cout<<"1000";
			return 0;
		} 
	}
	else{
		//cout<<"flag";
		cout<<"0000";
		return 0;
	}
	return 0;
}