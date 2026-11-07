#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
	ifstream cin("travel.in");
	ofstream cout("travel.out");
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	
	char a1[5],a2[5];
	for(int i=1;i<=3;i++)
	{
		a1[i] = s1[i-1];
		a2[i] = s2[i-1];
	}
	
	
	if(a1[1]==a2[1])
	{
		if(a1[2]==a2[2]){
			cout<<1;
			if(a1[3]=='D')
			{
				if(a2[3]=='F') cout<<"11";
				else cout<<"00";
			}
			else if(a1[3]=='F')
			{
				if(a2[3]=='D') cout<<"11";
				else cout<<"00";
			}
			else if(a2[3]=='F' || a2[3]=='D') cout<<"00";
			else{
				if(a1[3]-a2[3]==1 || a1[3]-a2[3]==-1) cout<<"11";
				else cout<<"10";
			}
		}
		else cout<<"000";
	}
	else cout<<"000";
	
	return 0;
}