#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;	
	}else{
		cout<<0;
	}
	int ss1=0,ss2=0;
	ss1=(s1[0]-48)*10+(s1[1]-48);
	ss2=(s2[0]-48)*10+(s2[1]-48);
	int n1,n2;
	n1=s1[2]-48-16;
	n2=s2[2]-48-16;
	if(c1==c2&&ss1==ss2){
		cout<<1;	
	}else{
		cout<<0;
	}
	if(c1==c2&&ss1==ss2&&((n1<=3&&n2<=3)||(n1>=4&&n2>=4))){
		cout<<1;	
	}else{
		cout<<0;
	}
	if((n1==n2+1||n1==n2-1)&&c1==c2&&ss1==ss2&&((n1<=3&&n2<=3)||(n1>=4&&n2>=4))){
		cout<<1;	
	}else{
		cout<<0;
	}
	return 0;
} 
