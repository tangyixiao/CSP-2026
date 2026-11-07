#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;

int solve(string s){
	int x=0;
	for(int i=0;i<2;i++){
		x*=10;
		x+=s[i]-'0';
	}
	return x;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		int x1=solve(s1),x2=solve(s2);
		if(x1==x2){
			cout<<"1";
			if((s1[2]-'A')>=0&&(s1[2]-'A')<3){
				if((s2[2]-'A')>=0&&(s2[2]-'A')<3){
					cout<<"1";
					if(abs(s2[2]-s1[2])<=1){
						cout<<"1";
					}else cout<<"0";
				}else{
					cout<<"00";
				}
			}else if((s2[2]-'A')>=0&&(s2[2]-'A')<3){
				cout<<"00";
			}else{
				cout<<"11";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	cout<<endl;
	return 0;
}