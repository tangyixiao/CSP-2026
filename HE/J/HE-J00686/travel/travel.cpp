#include <bits/stdc++.h>
using namespace std;
string s1,c1,s2,c2;
int a=0,b=0,c=0,d=0;
int t=0,q=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>c1>>s2>>c2;
	for(int i=0;i<2;i++){
		if(s1[i]==s2[i])q++;
	}
	if(q==2)a=1;
	//同一车厢 
	if(a==1){
		for(int i=0;i<2;i++){
			if(c1[i]==c2[i]){
				t++;
			}
		}
		if(t==2){
			b=1;
		}else{
			b=0;
		}
	}else{
		b=0;
	}
	//同一车厢的同一排 
	if(a==1&&b==1){
		if(c1[2]=='A'&&(c2[2]=='B'||c2[2]=='C'))c=1;
		if(c1[2]=='B'&&(c2[2]=='A'||c2[2]=='C'))c=1;
		if(c1[2]=='C'&&(c2[2]=='A'||c2[2]=='B'))c=1;
		if(c1[2]=='D' && c2[2]=='F')c=1;
		if(c1[2]=='F'&&c2[2]=='D')c=1;
	}
	if(a==1&&b==1&&c==1){
		if(c1[2]=='A' && c2[2]=='B')d=1;
		if(c1[2]=='B' && (c2[2]=='A' || c2[2]=='C'))d=1;
		if(c1[2]=='C'&& c2[2]=='B')d=1;
		if((c1[2]=='D'&& c2[2]=='F') || (c1[2]=='F'&& c2[2]=='D'))d=1;		
	}

	//相邻  
	cout<<a<<b<<c<<d;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
