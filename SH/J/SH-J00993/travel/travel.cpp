#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int check(string a){
	if(a[2] == 'A'){
		return 1;}
	if(a[2] == 'B'){
		return 1;}
	if(a[2] == 'C'){
		return 1;}
	return 2;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	if(c == cc){
		cout<<"1";
		if(s[0] == ss[0] and s[1] == ss[1]){
			cout<<"1";
			if(check(s) == check(ss)){
				cout<<"1";
				//cout<<s;
				if(check(s) == 1){
					if(s[2] - ss[2] == 1 or s[2] - ss[2] == -1){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				if(check(s) == 2){
					if(s[2] - ss[2] == 2 or s[2] - ss[2] == -2){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
