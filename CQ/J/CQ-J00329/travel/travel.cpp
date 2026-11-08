#include<bits/stdc++.h>
using namespace std;
int c1,c2,p1,p2;
bool l1;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	l1=s1[0]*10+s1[1]==s2[0]*10+s2[1];
	p1=s1[2]-64;
	p2=s2[2]-64;
	if(c1==c2){
		cout<<1;
		if(l1){
	    cout<<1;
	    if((p1<4&&p2<4)||(p1>3&&p2>3)){
		    cout<<1;
		    if(abs(p1-p2)==1)cout<<1;
		    else cout<<0;
		}
	    else cout<<"00";
	    }
	    else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}

