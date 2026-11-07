#include <bits/stdc++.h>
using namespace std;
char a[10000];
char b[10000];
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int na=0,nb=0;
	cin>>na;
	for(int i=1; i<=3; i++)
		cin>>a[i];
	cin>>nb;
	for(int i=1; i<=3; i++)
		cin>>b[i];
	bool n1=0,n2=0,n3=0,n4=0;

	if(na==nb) {
		n1=1;
		if(a[1]==b[1] && a[2]==b[2]) {
			n2=1;
			if(a[3]=='A' || a[3]=='B' ||a[3]=='C')
			{
				if(b[3]=='D' ||b[3]=='F')
				{
					cout<<"1100";
				}
				else
				{
					n3=1;
					if(a[3]==b[3]+1 || a[3]==b[3]-1)
					{
						cout<<"1111";
					}
					else
						cout<<"1110";
				}
			}
			else if(b[3]=='A' || b[3]=='B' ||b[3]=='C')
			{
				if(b[3]=='D' ||b[3]=='F')
				{
					cout<<"1100";
				}
				else
				{
					n3=1;
					if(a[3]==b[3]+1 || a[3]==b[3]-1)
					{
						cout<<"1111";
					}
					else
						cout<<"1110";
				}
			}

			} 
		else
			cout<<"1000";

	} 
	else
		cout<<"0000";
	





	fclose(stdin);
	fclose(stdout);
	return 0 ;
}
