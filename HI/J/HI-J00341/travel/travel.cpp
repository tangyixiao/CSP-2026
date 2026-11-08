#include<bits/stdc++.h>
using namespace std;
int b[5];
string s;
string c;
int x;
int y;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
//1 
    if(c1==c2){
    	b[1]=1;
	}else{
	    b[1]=0;
	    b[2]=0;
		b[3]=0;
		b[4]=0;
		cout<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4];
		return 0;
    }
//2
	for(int i=0;i<s1.size();i++){
	   	  if(s1[i]>='0'&&s1[i]<='9'){
			s+=s1[i];
		}
	}
	   for(int i=0;i<s2.size();i++){
		  if(s2[i]>='0'&&s2[i]<='9'){
			c+=s2[i];
		}
	}
	    if(s==c){
	    	b[2]=1;
		}else{
			b[2]=0,b[3]=0,b[4]=0;
		}
    
    char f;
    char g;
//3
	   for(int i=0;i<s1.size();i++){
	   	  if(s1[i]>='A'&&s1[i]<='Z'){
			f=s1[i];
		}
	}
	   for(int i=0;i<s2.size();i++){
		  if(s2[i]>='A'&&s2[i]<='Z'){
			g=s2[i];
		}
	}
	    if(((f=='A'||f=='B'||f=='C')&&(g=='A'||g=='B'||g=='C'))||((f=='D'||f=='F')&&(g=='C'||g=='F'))){
	    	b[3]=1;
		}else{
			b[3]=0,b[4]=0;
		}
//4
		for(int i=0;i<s1.size();i++){
	   	  if(s1[i]>='0'&&s1[i]<='9'){
			x+=s1[i];
		}
	}
	   for(int i=0;i<s2.size();i++){
		  if(s2[i]>='0'&&s2[i]<='9'){
			y+=s2[i];
		}
	}
	   if(x+'1'==y||x-'1'==y){
	   	 b[4]=1;
	}else{
		b[4]=0;
	}
    cout<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4];
	return 0; 
} 
