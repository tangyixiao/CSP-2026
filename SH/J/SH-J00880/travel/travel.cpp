#include<bits/stdc++.h> 
using namespace std;

string c1,c2;
string s1,s2;

bool check(string s){
	if(s[2]=='A' || s[2]=='B' || s[2]=='C') return true;
	return false;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		string h1=s1.substr(0,2);
		string h2=s2.substr(0,2);
		if(h1==h2){
			cout<<1;
			bool b1=check(s1);
			bool b2=check(s2);
			if(b1==b2){
				cout<<1;
				if(b1==false) cout<<1<<endl;
				else{
					int n1=s1[2]-'A'+1;
					int n2=s2[2]-'A'+1;
					if(abs(n1-n2)==1) cout<<1<<endl;
					else cout<<0<<endl;
				}
			}
			else{
				cout<<"00"<<endl;
				return 0;
			}
		}
		else{
			cout<<"000"<<endl;
			return 0;
		}
	}
	else{
		cout<<"0000"<<endl;
		return 0;
	}
	return 0;
}
