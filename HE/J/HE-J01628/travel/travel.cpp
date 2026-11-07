//Trick||Treat! 
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define int128 __int128
#define gc getchar()
using namespace std;
const int N=1e5+10;
int rd(){
	int x=0,f=1;char c=gc;
	for(;!isdigit(c);c=gc)if(c=='-')f=-1;
	for(;isdigit(c);x=x*10+c-'0',c=gc);
	return x*f;
}
string c1,s1,c2,s2;
string l="ABC",r="DF";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2)cout<<"1";
	else cout<<"0";
	
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1])cout<<"1";
	else cout<<"0";
	
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&
	  ((l.find(s1[2])!=-1&&l.find(s2[2])!=-1)||
	   (r.find(s1[2])!=-1&&r.find(s2[2])!=-1))){
		cout<<"1";
	}else{
		cout<<"0";
	}
	
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&
	   ((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||
	    (s1[2]=='D'&&s2[2]=='F')||(s1[2]=='B'&&s2[2]=='A')||
		(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='F'&&s2[2]=='D'))){
	    cout<<"1";	
	}else cout<<"0";
	
	cout<<"\n";
	return 0;
}
//我常常追忆过去，后面忘了 
