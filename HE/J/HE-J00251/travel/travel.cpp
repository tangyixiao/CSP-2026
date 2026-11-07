#include<bits/stdc++.h>
using namespace std;
int a[3],b[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2; 
int h,g,l,v;
for(int i=0;i<3;i++){
	i=s1.size();
}
    if(c1==c2){
    	h=1;
	} 
	if(c1!=c2){
		h=0;
	}
	cout<<h;
	for(int i=0;i<2;i++){
	if(a[i]==b[i]){
    	g=1;
	}else{
		g=0;
	}
		}
	cout<<g;
	for(int i=0;i<3;i++){
	if((a[2]=='A'&&(b[2]=='B'||b[2]=='C'))||(a[2]=='B'&&(b[2]=='A'||b[2]=='C'))||(a[2]=='C'&&(b[2]=='A'&&b[2]=='B'))||(a[2]=='D'&&(b[2]=='F'))||(a[2]=='F'&&b[2]=='D')){
       l=1;
	}else{
	l=0;
	}	
}
	cout<<l;
		if((a[2]=='A'&&b[2]=='B')||(a[2]=='B'&&(b[2]=='A'||b[2]=='C'))||(a[2]=='C'&&b[2]=='B')||(a[2]=='D'&&b[2]=='F')||(a[2]=='F'&&b[2]=='D')){
			v=1;
		}else{
			v=0;
		}
	cout<<v;
	return 0;
}
