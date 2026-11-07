#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool fc,fr;
	if(c1==c2){
		fc=1;
		cout<<1;
	}else{
		fc=0;
		cout<<0;
	}
	if(fc==0){
		cout<<0;
	}else{
		int len=s1.size();
		string r1="",r2="";
		for(int i=0;i<len-1;++i){
			r1+=s1[i];
			r2+=s2[i];
		}
		if(r1==r2){
			fr=1;
			cout<<1;
		}else{
			fr=0;
			cout<<0;
		}
	}
	if(fc==0||fr==0){
		cout<<0;
	}else{
		int len1=s1.size();
		int len2=s2.size();
		if((s1[len1-1]>='A'&&s1[len1-1]<='C'&&s2[len2-1]>='A'&&s2[len2-1]<='C')||(s1[len1-1]>='D'&&s1[len1-1]<='F'&&s2[len2-1]>='D'&&s2[len2-1]<='F')){
			cout<<1;			
		}else{
			cout<<0;
		}
	}
	if(fc==0||fr==0){
		cout<<0;
	}else{
		int len1=s1.size();
		int len2=s2.size();
		if(s1[len1-1]=='A'&&s2[len1-1]=='B'||s1[len1-1]=='B'&&s2[len1-1]=='C'||s1[len1-1]=='D'&&s2[len1-1]=='F'){
			cout<<1;			
		}else{
			cout<<0;
		}
	}
	return 0;
}
