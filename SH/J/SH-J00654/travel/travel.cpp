#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			char k1=s1[2],k2=s2[2];
			if(((k1=='A'||k1=='B'||k1=='C') && (k2=='A'||k2=='B'||k2=='C')) || ((k1=='D'||k1=='E') && (k2=='D'||k2=='E'))){
				cout<<1;
				if(abs(int(k1)-int(k2))==1 && !((k1=='C'&&k2=='D')||(k1=='D'&&k2=='C')) ){
					cout<<1;
				}else cout<<0;  //02 01C 02 01D
				
			}else cout<<"00";
			
		}else cout<<"000";
		
	}else cout<<"0000";
	
	
	return 0;
}
