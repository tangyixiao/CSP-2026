#include<bits/stdc++.h>
 using namespace std;
 int main(){
 	int a=0,c=0,e,f;
 	char b,d;
 	cin>>a>>b>>c>>d;
 	e=b+0;
 	f=d+0;
 	if(a==c){
 		cout<<"1";
 		if(e==f){
 			cout<<"1";
 			if(e<=3 && f<=3  || e>=4 && f>=4){
 				cout<<"1";
		 		if(e-f==1 || f-e==1){
						cout<<"1";		
				 } 	
				 else cout<<"0";	
			 } 
 				else cout<<"00";
 			} 
 			else cout<<"000";
	 }
	   else cout<<"0000";
 	
 	return 0;
 }