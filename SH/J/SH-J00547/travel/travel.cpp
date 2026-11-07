#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char c1,char c2){
	if(c1>c2)swap(c1,c2);
	if((c1=='A'&&c2=='B')||(c1=='B'&&c2=='C')||(c1=='D'&&c2=='F'))return 1;
	else return 0;
} 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1])
		{
			cout<<"1";
			if((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D'))
			{
				cout<<"1";
				if(check(b[2],d[2])){
					cout<<"1\n";
				}
				else{
					cout<<"0\n";
				}
			}
			else{
				cout<<"00\n";
			}
		}
		else
		{
			cout<<"000\n";
		}
	}
	else{
		cout<<"0000\n";
	}
} 
