#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int c1=(a[0]-'0')*10+(a[1]-'0');//³µÏá 
	int c2=(c[0]-'0')*10+(c[1]-'0');
	int s1=(b[0]-'0')*10+(b[1]-'0');
	int s2=(d[0]-'0')*10+(d[1]-'0');
	int k1,k2;
	if(b[2]=='F')	b[2]='E';
	if(d[2]=='F')	d[2]='E';
	k1=b[2]-'A';
	k2=d[2]-'A';
	if(c1==c2){
		cout<<"1";
		if(s1==s2){
			cout<<"1";
			if(k1<=2&&k2<=2){
				cout<<"1";
				if(k1-k2==1)	cout<<"1";
				else if(k2-k1==1)	cout<<"1";
				else	cout<<"0";
			}
			else if(k1>=3&&k2>=3){
				cout<<"1";
				cout<<"1";
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
		} 
	}
	else{
		cout<<"0000";
	}
	return 0;
} 
