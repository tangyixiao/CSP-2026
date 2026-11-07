#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,s1,a2,s2;
	cin>>a1>>s1>>a2>>s2;
	string maxx=max(s1,s2);
	string minn=min(s1,s2);
	//不在同一节车箱
	if(a1!=a2){
		cout<<"0000";
		return 0;
	}
	//不在同一排
	if(s1[1]!=s2[1]&&s1[2]!=s2[2]){
		cout<<"1000";
		return 0;
	}
	//不在同一侧
	if(maxx[3]=='D'){
		cout<<"1100";
		return 0;
	}
	//在左侧在一起
	if(minn[3]=='F'){
		cout<<"1111";
		return 0;
	}
	//在右侧没在一起
	if(maxx[3]!='B'&&minn[3]!='B'){
		cout<<"1110";
		return 0;
	}
	//在右侧在一起
	if(maxx[3]=='B'){
		cout<<"1111";
		return 0;
	}
	if(minn[3]=='B'){
		cout<<"1111";
		return 0;
	}
	cout<<"1111";
	return 0;
}