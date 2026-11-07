#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    c1=' '+c1;
    c2=' '+c2;
    s1=' '+s1;
    s2=' '+s2;
    if(c1[2]==c2[2]){
    	cout<<'1';
	}else{
		cout<<'0';
	}
	if(s1[1]==s2[1]&&s1[2]==s2[2]&&c1[2]==c2[2]){
		cout<<'1';
	
	}else{
		cout<<'0';
	}
	if(s1[1]==s2[1]&&s1[2]==s2[2]&&c1[2]==c2[2]){
		if((s1[3]<'D'&&s2[3]<'D')||(s1[3]>'C'&&s1[3]>'C')){
			cout<<'1';
			if(s1[3]+1==s2[3]||s1[3]-1==s2[3]){
				cout<<'1';
				return 0;
			}
		}else{
			cout<<'0';
		}
	}else{
		cout<<'0';
	}
	cout<<'0';
	return 0;
}

