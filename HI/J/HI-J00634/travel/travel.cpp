#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool a=0,b=0,c=0,d=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1;
	cin>>c2>>s2;
	int a1=0;
	for(int i=0;i<=1;i++){
		if(c1[i]==c2[i]){
			a1++;
		}
	}
	if(a1==2) a=1;
	if(a==1){
		int b1;
		for(int i=0;i<=1;i++){
			if(s1[i]==s2[i]){
				b1++;
			}
		}	
		if(b1==2) b=1;
		if(b==1){
			char s3,s4;
			s3=s1[2],s4=s2[2];
			if(s3<'D'&&s4<'D') c=1;
			else if(s3>'C'&&s4>'C') c=1;
			if(c==1){
				if(s3+1==s4&&s3!='C') d=1;
				else if(s3-1==s4&&s3!='D') d=1;
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}
