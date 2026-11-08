#include<bits/stdc++.h>
using namespace std;
namespace did
{
	int main()
	{
		freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0);
		string c1,s1,c2,s2;
		cin>>c1>>s1>>c2>>s2;
		if(c1==c2)
		{
			cout<<"1";
			if(s1.substr(0,2)==s2.substr(0,2))
			{
				cout<<"1";
				int tmp1=s1[2]-64,tmp2=s2[2]-64;
				//cout<<tmp1<<" "<<tmp2<<"\n";
				if((tmp1>=1 && tmp2<=3 && tmp2>=1 && tmp2<=3) || (tmp1>=4 && tmp2<=5 && tmp2>=4 && tmp2<=5))
				{
					cout<<"1";
					if(abs(tmp1-tmp2)==1) cout<<"1";
					else cout<<"0";
				}
				else cout<<"00";
			}
			else cout<<"000";
		}
		else cout<<"0000";
		return 0;
	}
}
int main()
{
	did::main();
	return 0;
}

