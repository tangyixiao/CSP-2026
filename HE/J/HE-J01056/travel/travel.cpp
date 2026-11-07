#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<c1.size();i++){
		if(c1[i]!=c2[i]){
			cout<<"0000";
			return 0;
		}
	}
	cout<<"1";
	for(int i=0;i<s1.size()-1;i++){
		if(s1[i]!=s2[i]){
			cout<<"000";
			return 0;
		}
	}
	cout<<"1";
	int len=s1.size()-1;
	if(s1[len]=='A'){
		if(s2[len]=='B'){
			cout<<"11";
			return 0;
		}
		else if(s2[len]=='C'){
			cout<<"10";
			return 0;
		}
		else if(s2[len]=='D'){
			cout<<"00";
			return 0;
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	else if(s1[len]=='B'){
		if(s2[len]=='A'){
			cout<<"11";
			return 0;
		}
		else if(s2[len]=='C'){
			cout<<"11";
			return 0;
		}
		else if(s2[len]=='D'){
			cout<<"00";
			return 0;
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	else if(s1[len]=='C'){
		if(s2[len]=='A'){
			cout<<"10";
			return 0;
		}
		else if(s2[len]=='B'){
			cout<<"11";
			return 0;
		}
		else if(s2[len]=='D'){
			cout<<"00";
			return 0;
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	else if(s1[len]=='D'){
		if(s2[len]=='A'){
			cout<<"00";
			return 0;
		}
		else if(s2[len]=='B'){
			cout<<"00";
			return 0;
		}
		else if(s2[len]=='C'){
			cout<<"00";
			return 0;
		}
		else{
			cout<<"11";
			return 0;
		}
	}
	else{
		if(s2[len]=='A'){
			cout<<"00";
			return 0;
		}
		else if(s2[len]=='B'){
			cout<<"00";
			return 0;
		}
		else if(s2[len]=='C'){
			cout<<"00";
			return 0;
		}
		else{
			cout<<"11";
			return 0;
		}
	}
	return 0;
}
