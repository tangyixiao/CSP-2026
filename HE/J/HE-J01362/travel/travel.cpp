#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;

int main(){
	cin>>c1>>s1>>c2>>s2;
	string ans="0000";
	if (c1==c2){
		ans[0]='1';
	}else{
		cout<<ans;
		return 0;
	}
	int pai1,pai2;
	pai1=(s1[0]-'0')*10+s1[1];
	pai2=(s2[0]-'0')*10+s2[1];
	if(pai1==pai2){
		ans[1]='1';
	}else{
		cout<<ans;
		return 0;
	}
	char R,X;
	R=s1[2];
	X=s2[2];
	int q;
	if(R>X){
		q=R-X;
	}else{
		q=X-R;
	}
	if(R>='D'&&X>='D'){
		ans[2]='1';
		ans[3]='1';
		cout<<ans;
		return 0;
    }else if(R>='D'||X>='D'){
    	cout<<ans;
    	return 0;
	}else if(q<2){
		ans[2]='1';
		ans[3]='1';
		cout<<ans;
		return 0;
	}else{
		ans[2]='1';
		cout<<ans;
		return 0;
	}
	return 0;
}
