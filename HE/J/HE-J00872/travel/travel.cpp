#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2)
		cout<< 1;
	else{
		cout<< "0000";
		return 0;
	}
	
	bool ok=1;
	for(int i=0;i<2;i++)
		if(s1[i]!=s2[i]){
			ok=0;
			break;
		}
	if(ok)
		cout<< 1;
	else{
		cout<< "000";
		return 0;
	}
	
	char ma=max(s1[2],s2[2]),mi=min(s1[2],s2[2]);
	if(ma>='D' && mi<='C'){
		cout<< "00";
		return 0;
	}
	else
		cout<< 1;
		
	if(ma-mi==1)
		cout<< 1;
	else
		cout<< 0;
}
