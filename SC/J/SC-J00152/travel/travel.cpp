#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
namespace my{
	string ans="";
	int main(){
		freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout);
		string s1,s2,c1,c2;
		cin>>c1>>s1>>c2>>s2;
		if(c1==c2){
			ans+="1";
			string a=s1,b=s2;
			a.erase(2);b.erase(2);
			if(a==b){
				ans+="1";
				char c=s1[s1.size()-1],d=s2[s1.size()-1];
				if(c<='C'&&d<='C'){
					ans+="1";
					if((c=='A'&&d=='C')||(d=='A'&&c=='C'))ans+="0";
					else ans+="1";
					cout<<ans;return 0;
				}
				else if(c>='D'&&d>='D'){ans+="11";cout<<ans;return 0;}
				else {ans+="00";cout<<ans;return 0;}
			}else{
				ans+="000";
				cout<<ans;
				return 0;
			}
		}
		else ans="0000";
		cout<<ans;
		return 0;
	}
}
int main(){
	my::main();
	return 0;
}