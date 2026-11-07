#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3)
	{
		cout<<"0000";
		return 0;
	}
	else{
		cout<<1;
		if(s2[0]==s4[0]&&s2[1]==s4[1])
		{
			cout<<1;
			if((s2[2]<=67&&s4[2]<=67)||(s2[2]>67&&s4[2]>67)){
				cout<<1;
				if(abs(int(s2[2]-s4[2]))==1)
					cout<<1;
				else cout<<0;
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	return 0;
}