#include<bits/stdc++.h>
using namespace std;
string tt(int x){
	vector<int> v;
	string ans;
	while(x!=0){
		int num=x%2;
		v.push_back(num);
		x/=2;
	}
	int len=v.size();
	for(int i=len-1;i>=0;i--){
		if(v[i]==1) ans+="1";
		else ans+="0";
	}
	return ans;
}
string yu(int x,int y){
	string ans="";
	string xs=tt(x);
	string ys=tt(y);
	int lenx=xs.size();
	int leny=ys.size();
	string xt="",yt="";
	if(lenx<leny){
		yt=ys;
		int c=leny-lenx;
		for(int i=1;i<=c;i++) xt+="0";
		xt+=xs;
	}
	else if(leny<lenx){
		xt=xs;
		int c=lenx-leny;
		for(int i=1;i<=c;i++) yt+="0";
		yt+=ys;
	}
	bool flag=false;
	for(int i=0;i<=xt.size()-1;i++){
		if((xt[i]=='0' || yt[i]=='0') && flag) ans+="0";
		else{
			ans+="1";
			flag=true;
		} 
	} 
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	cout<<yu(n,m);
	return 0;
}
/*
3 and 15=3
3 and 12=0
15 and 12=12
12 and 12=12

0011 | 1111 = 0011
0011 | 1100 = 0000
1111 | 1100 = 1100
1100 | 1100 = 1100

与：全1才1，有0则0 

31 | 15 | 7
11111 | 01111 | 00111 = 111
*/