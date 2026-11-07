#include<bits/stdc++.h>
using namespace std;
void solve(){
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
    	cout<<1;
	}else{
		cout<<"0000";
		return;
	}
	string temp1="",temp2="";
	for(int q=0;q<2;q++){
		temp1+=s1[q];
		temp2+=s2[q];
	}
	if(temp1==temp2){
		cout<<1;
	} else{
		cout<<"000";
		return;
	}
	if(s1[2]<='C'&&s2[2]<='C'||s1[2]>'C'&&s2[2]>'C'){
		cout<<1;
	}else{
		cout<<"00";
		return;
	}
	if(abs(s1[2]-s2[2])==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return;
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
