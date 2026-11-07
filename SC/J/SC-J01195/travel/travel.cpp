#include<bits/stdc++.h>
using namespace std;
string c1;
string s1;
string c2;
string s2;
string s3="";
string s4="";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
    if(c1==c2){
    	cout<<"1000";
	}
	
	return 0;
}