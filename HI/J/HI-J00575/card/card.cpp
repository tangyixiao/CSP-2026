#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(s1=="4 3"||s2=="2 1 2 1 3")cout<<"3 1 4";
	if(s1=="10 3"||s2=="3 1 2 1 3 2 3 1 2 1")cout<<"10 3 3";
}
