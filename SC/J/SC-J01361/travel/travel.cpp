#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,d1,d2;
	cin>>c1>>c2>>d1>>d2;
	char c3=c2[2],d3=d2[2];
	if(c1==d1){
		cout<<1;
		if(c2[0]==d2[0]&&c2[1]==d2[1]){
			cout<<1;
			if((c3=='C'&&d3=='D')||(d3=='C'&&c3=='D'))
			{
				cout<<0<<0;
			}
			else
			{
				cout<<1;
				if((c3=='A'&&d3=='B')||(d3=='A'&&c3=='B')||(c3=='B'&&d3=='C')||(d3=='B'&&c3=='C')||(c3=='F'&&d3=='D')||(d3=='F'&&c3=='D'))
				{
					cout<<1;
				}
				else
				{
					cout<<0;
				}
			}
		}
		else
		{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}