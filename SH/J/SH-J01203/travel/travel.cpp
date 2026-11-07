#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define N 1000020
//#define iscc ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string c1,t1,c2,t2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//system("fc test.ans test.out");
	cin>>c1>>t1>>c2>>t2;
	
	int x1,x2;//≥µœ· 
	if(c1[0]=='0') x1=c1[1]-'0';
	else{
		x1+=10*(c1[0]-'0')+(c1[1]-'0');
	}
	if(c2[0]=='0') x2=c2[1]-'0';
	else{
		x2+=10*(c2[0]-'0')+(c2[1]-'0');
	}
	
	if(x1!=x2){
		cout<<"0000";
		return 0;
	}else{
		cout<<"1";
	}
	
	
	int p1,p2;
	if(t1[0]=='0') p1=t1[1]-'0';
	else{
		p1+=10*(t1[0]-'0')+(t1[1]-'0');
	}
	if(t2[0]=='0') p2=t2[1]-'0';
	else{
		p2+=10*(t2[0]-'0')+(t2[1]-'0');
	}
	
	if(p1!=p2){
		cout<<"000";
		return 0;
	}else{
		cout<<"1";
	}
	
	
	int ss1,ss2;
	ss1=int(t1[2]);
	ss2=int(t2[2]);
	if(ss1<=int('C')&&ss2<=int('C')||ss1>=int('D')&&ss2>=int('D')){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	
	if(abs(ss1-ss2)==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	
	return 0;
}



