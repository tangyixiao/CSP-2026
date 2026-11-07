#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
string seat[20][7];
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else {
		cout<<"0000";
		return 0;
	}
	
	string q1=s1.substr(0,2);
	string q2=s2.substr(0,2);
	if(q1==q2){
		cout<<1;
	}
	else {
		cout<<"000";
		return 0;
	}
	
	int w1=s1[s1.size()-1]-'A'+1;//1.2.3.4.6
	int w2=s2[s2.size()-1]-'A'+1;
	if(w1==6)w1=5;
	if(w2==6)w2=5;
	if(w1>3){
		if(w2>3){
			cout<<"11";
			return 0;
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	if(w1<4){
		if(w2<4){
			cout<<1;
			if(w1==3||w1==1){
				if(w2==2){
					cout<<1;
					return 0;
				}
				else{
					cout<<0;
					return 0;
				}
			}
			else {
				cout<<1;
				return 0;
			}
		}
		else{
			cout<<"00";
			return 0;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}