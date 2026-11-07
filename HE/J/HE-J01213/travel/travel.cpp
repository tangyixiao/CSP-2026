#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f=false,f1=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
     cin>>c1>>s1>>c2>>s2;
     if(c1==c2) cout<<1;
     else {
     	cout<<"0000";
     	return 0;
	 }
     for(int i=0;i<s1.size()-1;i++)
     	if(s1[i]!=s2[i])
     	f=true;
     if(f==true) cout<<0;
	 else cout<<1;
	 if(f==false){
	 	if((s1[2]>='A'&&s1[2]<='c'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')){
	 			cout<<1;
	 			f1=true;
		 }
	 
		else cout<<0;	
	}
    else cout<<0;
    if(f1==true){
    	if(abs(s1[2]-s2[2])==1)
    	cout<<1;
    	else cout<<0;
    	
	}
    else cout<<0;
    return 0;
	
     	
	 
}
