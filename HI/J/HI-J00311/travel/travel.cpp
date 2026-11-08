
#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1;
	cin>>c1;
	string s1;
	cin>>s1; 
	int p=0;
	string c2;
	cin>>c2;
	string s2;
	cin>>s2;
    if(c1==c2) cout<<1;
    else cout<<0;
    if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<1;
    else cout<<0;
    if(s1[2]=='C'&&s2[2]=='D'||s1[2]=='D'&&s2[2]=='D'&&s1[2]=='C') cout<<1;
    else cout<<0;
    if(s1[2]=='C'&&s2[2]=='D'||s1[2]=='D'&&s2[2]=='D'&&s1[2]=='C'){
    	if(s1[2]-s2[2]==1||s2[2]-s1[2]==1){
    		cout<<1;
		}
		else cout<<0;
	}
    return 0;
}
