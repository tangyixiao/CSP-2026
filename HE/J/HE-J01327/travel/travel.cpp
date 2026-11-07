#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	int c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int A,B,C,D,E,F;
	cin>>A>>B>>C>>D>>E>>F;
    for(int i=4;i<=1;i++){
    	if(c1==c2){
    		cout<<1;
		}else{
			cout<<0;
		}
		if(s1==s2&&s1=='A'||s1=='B'||s1=='C'||s1=='D'||s1=='E'||s1=='F'){
		   cout<<1;
		}else{
			cout<<0;
		}
		if(s2=='A'||s2=='B'||s2=='C'||s2=='D'||s2=='E'||s2=='F'){
			cout<<1;
		}else{
			cout<<0;
		}
		
	}
	cout<<1111;
	
	return 0;
} 
