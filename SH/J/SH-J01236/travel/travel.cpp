#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin>>c1>>s1>>c2>>s2;
	int ss1=(s1[0]-'0')*10+(s1[1]-'0');
	int ss2=(s2[0]-'0')*10+(s2[1]-'0');
	int sf1=s1[2]-'A'+1;
	int sf2=s2[2]-'A'+1;
	if(c1==c2){
		cout<<1;
		if(ss1==ss2){
			cout<<1;
			if(sf1<=3&&sf2<=3||sf1>3&&sf2>3){
				cout<<1;
				if(abs(sf1-sf2)==1||sf1==4&&sf2==6||sf1==6&&sf2==4){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
