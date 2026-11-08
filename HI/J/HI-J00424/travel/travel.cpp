#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;string a[1005]={" ","A","B","C"};
	cin>>c1>>s1>>c2>>s2;
	//string b=(s2[2]);
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0] and s1[1]==s2[1]){
			cout<<"1";
			
			/*for(int i=0;i<4;i++){
			
				
				
				
					if(s2[2]==a[i+1] and s2[2]==a[i-1]) cout<<"11";
					else{
						for(int i=1;i<4;i++){
							if(s2[2]==a[i]) {cout<<"10";return 0;}
						}
						cout<<"00";
					}
			}*/
		}
		else cout<<"000";		
	}
	else cout<<"0000";
	//cout<<s1[0]<<s2[2];
	return 0;
} 
