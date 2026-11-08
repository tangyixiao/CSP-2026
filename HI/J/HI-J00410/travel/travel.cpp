#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//提交时记得删掉注释哦！！！ freopen别漏 文件名看看写没写对！！！
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a1,a2,b1,b2;
	char a,b;
	cin>>a1>>a2>>b1>>b2;
	a=a2[2],b=b2[2];
	int a3=(a2[0]-48)*10+(a2[1]-48);
	int b3=(b2[0]-48)*10+(b2[1]-48);
	if(a1!=b1){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(a3!=b3){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if(a+b=='D'+'E'){
		cout<<"11";
		return 0;
	}
	if(a>b) swap(a,b);
	if(b=='E'||b=='D'){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(b-a==1){
		cout<<"1";
		return 0;
	}
	cout<<"0";
	return 0;
}

