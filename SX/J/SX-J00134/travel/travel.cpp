#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int a1=s1[2]-'A',a2=s2[2]-'A';
	int b1=s1[0]-'0',b2=s2[0]-'0';
	int d1=s1[1]-'0',d2=s2[1]-'0';
	if(c1==c2){
		cout<<"1";
		if(b1==b2 && d1==d2) {
			cout<<1;
			if((a1>=0 && a1<=2) && (a2>=0 && a2<=2) || (a1>=3 && a1<=4) && (a2>=3 && a2<=4))
			{
				cout<<1;
				if(a1-a2==1 || a2-a1==1) cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}