#include<bits/stdc++.h>
using namespace std;
int solve(string s){
	int x=0;
	for(char c:s){
		if(c<='9'&&c>='0'){
			x=x*10+(c-'0');
		}
	}
	return x;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<'1';
		int a=solve(s1),b=solve(s2);
		if(a==b){
			cout<<'1';
			char A=s1[2],B=s2[2];
			if((A<='C' && B<='C') || (A>='D' && B>='D')){
				cout<<'1';
				if(A>='D' && B>='D'){
					if((A=='D' && B=='F') || (A=='F' && B=='D')){
						cout<<'1';
					}
				}
				else if(abs(A-B)==1){
					cout<<'1';
				}
				else cout<<'0';
			}
			else{
				cout<<"00";
			}
			
		}
		else {
			cout<<"000";
		}
		
	}
	else {
		cout<<"0000";
	}
	return 0;
}