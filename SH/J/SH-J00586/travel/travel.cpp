#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen(stdin,"travel.in",r);
	freopen(stdout,"travel.out",w);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int m1,m2,n1,n2;
	m1=10*(c1[0]-'0')+c1[1]-'0';
	n1=10*(s1[0]-'0')+s1[1]-'0';
	m2=10*(c2[0]-'0')+c2[1]-'0';
	n2=10*(s2[0]-'0')+s2[1]-'0';
	if(m1!=m2){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<"1";
		if(n1!=n2){
			cout<<"000";
		}
		else{
			cout<<"1";
			bool o1=0,o2=0;
			if(s1[2]-'A'<3){
				o1=1;
			}
			if(s2[2]-'A'<3){
				o2=1;
			}
			if(o1==o2){
				cout<<"1";
				if(o1){
					if(s1[2]=='B'||s2[2]=='B'){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				else{
					cout<<"1";
				}
			}
			else{
				cout<<"00";
			}
		}
	}
	return 0;
} 
