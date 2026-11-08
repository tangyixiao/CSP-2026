#include<bits/stdc++.h>
using namespace std;
string s[2];
string c[2];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0;i<2;i++){
		cin>>c[i]>>s[i];
	}
	if(s[0]==s[1]){
		cout<<1<<1<<1<<1;
		return 0;
	}
	if(c[0]==c[1]){
		cout<<'1';
	
		if(s[0][0]==s[1][0]&&s[0][1]==s[1][1]){
			cout<<1;
			if(s[0][2]>='A'&&s[0][2]<='C'&&s[1][2]>='A'&&s[1][2]<='C'||s[0][2]>='D'&&s[1][2]<='F'&&s[1][2]>='D'&&s[1][2]<='F'){
					cout<<1;
					
					if(abs(s[0][0]+s[0][1]+s[0][2]-s[1][0]-s[1][1]-s[1][2])==1)
						cout<<1;
					else cout<<0;
			}
			else{
		 	
				cout<<0;
				if(abs(s[0][0]-s[1][0]+s[0][1]-s[1][1]+s[0][2]-s[1][2])==1)
						cout<<1;
				else cout<<0;
			}
		
		}				
		else{
		 	
			
			cout<<0<<0;
				if(abs(s[0][0]-s[1][0]+s[0][1]-s[1][1]+s[0][2]-s[1][2])==1)
						cout<<1;
				else cout<<0;
			}
	}
	else cout<<0<<0<<0<<0;

	return 0;
}

