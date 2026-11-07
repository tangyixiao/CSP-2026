#include<bits/stdc++.h>
using namespace std;
int n;
string c,s,cc,ss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	if(c==cc){
		cout<<1;
		if(s[0]==ss[0]&&s[1]==ss[1]){
			cout<<1;
			char a=s[2], aa=ss[2];
			if(aa>a) swap(aa,a);
			if(a=='F'&&aa=='D'){
				cout<<"11";
			}
			else if(a<='C'){
				cout<<1;
				if(a-aa==1) cout<<1;
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
    return 0;
}
