#include <bits/stdc++.h> 
using namespace std;
string p1,p2;
char n1,n2;
int tp1,tp2;
bool b=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		b=true;
		cout<<1;
	}else{
		b=false;
		cout<<0;
	}
	for(int i=0;i<s1.size();i++){
		if('0'<=s1[i]&&s1[i]<='9')p1+=s1[i];
		if('A'<=s1[i]&&s1[i]<='F')n1=s1[i];
	}
	for(int i=0;i<s2.size();i++){
		if('0'<=s2[i]&&s2[i]<='9')p2+=s2[i];
		if('A'<=s2[i]&&s2[i]<='F')n2=s2[i];
	}
	if(p1==p2&&b){
		cout<<1;
	}else{
		cout<<0;
		b=false;
	}
	if('A'<=n1&&n1<='C')tp1=0;
	else tp1=1;
	if('A'<=n2&&n2<='C')tp2=0;
	else tp2=1;
	if(tp1==tp2&&b){
		cout<<1;
	}else{
		b=false;
		cout<<0;
	}
	if(b){
		if(tp1==1&&tp2==1){
			cout<<1;
			return 0;
		}
		if(n1+1==n2||n2+1==n1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	return 0;
}