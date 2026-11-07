#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	int p=1; 
	if(a1==a2){
		cout<<1;
		for(int i=0;i<=1;i++){
		   if(b1[i]!=b2[i]) {
		   	  p=0;
			}
		}if(p==1){
		   	cout<<1;
		   	   if(b1[2]<='C'&&b2[2]<='C'||b1[2]>'C'&&b2[2]>'C'){
			       cout<<1;
			        if(b1[2]+1==b2[2]||b1[2]-1==b2[2]) cout<<1;
		            else cout<<0;
		     }else cout<<"00";
		
		   }else cout<<"000";
		
		
	}else cout<<"0000"; 
		
		fclose(stdin);
		fclose(stdout);
	return 0;
}