#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	//第一个问题 
	bool e=true;
	for(int i=0;i<c1.size();i++){
		if(c1[i]!=c2[i]){
			e=false;
			cout<<0;
		}
	}
	if(e) cout<<1;
	//第二个问题
	bool x=false;
	if(e&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
		x=true;
	}
	else cout<<0;
	//第三个问题
	bool y=false;
	if(x&&s1[2]<'D'&&s2[2]<'D'){
		cout<<1;
		y=true;
	}
	else if(x&&s1[2]>='D'&&s2[2]>='D'){
		cout<<1;
		y=true;
	}
	else cout<<0;
	//第四个问题
	if(y){
		if(s1[2]==s2[2]+1||s1[2]+1==s2[2]){
			cout<<1;
		}
		else cout<<0;
	}
	else cout<<0;
	return 0;
}
