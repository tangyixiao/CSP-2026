#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char a,b;
int a1,b1;
bool f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	
	if((s1[2]=='C' && s2[2]=='D') && (s1[2]=='D' && s2[2]=='C')){
		f=false;
	}else{
		f=true;
	}
	
	a1=s1[2]-64;
	b1=s2[2]-64;
	
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C'){//判断s1左右侧 
		a='l';
	}else{
		a='r';
	}
	
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C'){//判断s2左右侧 
		b='l';
	}else{
		b='r';
	}
	
	
	
	if(c1==c2){//同一车厢 
		cout<<1;
	}else{
		cout<<0;
	}
	
	if((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1]) ){//同一车厢 同一排 
		cout<<1;
	}else{
		cout<<0;
	}
	
	if((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1]) && (a==b)){//同一车厢 同一排 && 同一侧 
		cout<<1;
	}else{
		cout<<0;
	}
	
	
	if((c1==c2) && (s1[0]==s2[0] && s1[1]==s2[1]) && (a==b) && (abs(a1-b1)==1) && f){//相邻 
		cout<<1;
	}else{
		cout<<0;
	}
	
	
	
	
	
	
	
	
	return 0;
} 



