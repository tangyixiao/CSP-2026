#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;

void solved(){
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans={};
	int d1=c1[0]*10+c1[1];
	int d2=c2[0]*10+c2[1];
	int p1=s1[0]*10+s1[1];
	int p2=s2[0]*10+s2[1];
	char a1=s1[2],a2=s2[2];
	int flagd=0,flagp=0;
	if(d1==d2) ans+='1',flagd=1;
	else ans+='0';
	
	if(flagd&&p1==p2) ans+='1',flagp=1;
	else ans+='0';	
	
	int flag=0;
	if(flagd&&flagp&&(a1+a2==138||(a1!='F'&&a1!='D'&&a2!='F'&&a2!='D'))){
		flag=1;
		ans+='1';
	}
	else ans+='0';
	
	if(flag){
		if(a1+a2!=132) ans+='1';
		else ans+='0';
	}
	else ans+='0';
	cout<<ans;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
//	int t; cin>>t; while(t--) 
	solved();
	
	return 0;
} 
