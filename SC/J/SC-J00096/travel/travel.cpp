#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<'1';
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			cout<<'1';
			if(s1[2]=='D' && s2[2]=='F'){
				cout<<'1'<<'1';
			}
			else if(s1[2]>=65 && s1[2]<=67 && s2[2]>=65 && s2[2]<=67){
				cout<<'1';
				if(abs(s1[2]-s2[2])==1){
					cout<<'1';
				}
				else{
					cout<<'0';
				}
			}
			else{
				cout<<'0'<<'0';
			}
		}
		else{
				cout<<'0'<<'0'<<'0';
		}
	}
	else{
		cout<<'0'<<'0'<<'0'<<'0';
	}
	return 0;
}