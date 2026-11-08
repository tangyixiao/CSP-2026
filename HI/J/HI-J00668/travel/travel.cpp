#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	for(int i=1;i<=s1.size();i++){
		for(int j=1;j<=s2.size();j++){
			if(c1==c2 && s1[i-1]==s2[j-1]  ){
				cout<<"1111";
				return 0;
			}else if(c1!=c2){
				cout<<"0000";
				return 0;
			}
			if(s1[i-1]!=s2[j-1] && c1==c2){
				cout<<"1000";
				return 0;
			}
			
		}
		
	}
	return 0;
}
