#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c,s,ce,se;
    cin>>c>>s>>ce>>se;
    if(c==ce){
    	cout<<1;
	} else{
		cout<<0;
	}
	if(s[0]==se[0] &&s[1]==se[1] ){
		cout<<1;
	}else{
		cout<<0;
	}
	if(s[1]==se[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	if(s[2]+1==se[2] || s[2]==se[2]+1){
		cout<<1;
	}else{
		cout<<0;
	}
    return 0;
}
