#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n1,n2;
	string m1,m2,s1,s2;
	cin>>n1>>m1>>n2>>m2;
	for(int i=0;i<2;i++){
		s1=s1+m1[i];
	}
	for(int i=0;i<2;i++){
		s2=s2+m2[i];
	}
	if(n1==n2){
		cout<<1;
		if(s1==s2){
		    cout<<1;
		    if((m1[2]=='A'||m1[2]=='B'||m1[2]=='C')&&(m2[2]=='A'||m2[2]=='B'||m2[2]=='C')||(m1[2]=='D'||m1[2]=='E')&&(m2[2]=='D'||m2[2]=='E')){
		    	cout<<1;
		    	if(m1[2]==m2[2]-1||m1[2]==m2[2]+1){
		    		cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0<<0;
				return 0; 
			}
	    }else{
		    cout<<0<<0<<0;
		    return 0;
	    }
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	
	
	return 0;
}
