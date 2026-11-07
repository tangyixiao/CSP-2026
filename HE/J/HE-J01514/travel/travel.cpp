#include<bits/stdc++.h>
using namespace std;
int cnt1,cnt2;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	std::cin>>c1>>s1>>c2>>s2;
	if(s1==s2){
		cout<<"0000";return 0;
	}
	if(c1==c2)cout<<1;
	else cout<<0;
	for(int i=0;i!=2;i++){
		cnt1=cnt1*10+s1[i]-'0';
	}
	for(int i=0;i!=2;i++){
		cnt2=cnt2*10+s2[i]-'0';
	}
	if(cnt1==cnt2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(s1[2]=='A'){
		if(s2[2]=='B'){
			cout<<"11";
		}else if(s2[2]=='C'){
			cout<<"10";
		}else{
			cout<<"00";
		}
	}else if(s1[2]=='B'){
		if(s2[2]=='A'||s2[2]=='C'){
			cout<<"11";
		}else{
			cout<<"00";
		}
	}else if(s1[2]=='C'){
		if(s2[2]=='B'){
			cout<<"11";
		}else if(s2[2]=='A'){
			cout<<"10";
		}else{
			cout<<"00";
		}
	}else if(s1[2]=='D'){
		if(s2[2]=='F'){
			cout<<"11";
		}else{
			cout<<"00";
		}
	}else{
		if(s2[2]=='D'){
			cout<<"11";
		}else{
			cout<<"00";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

