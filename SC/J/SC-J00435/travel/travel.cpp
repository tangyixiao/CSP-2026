#include<bits/stdc++.h>
using namespace std;
string sx1,sx2,sy1,sy2,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sx1>>sx2>>sy1>>sy2;
	if(sx1!=sy1)
	{
		cout<<"0000";
	}else{
		ans+='1';
		int x=(sx2[0]-'0')*10+(sx2[1]-'0');
		int y=(sy2[0]-'0')*10+(sy2[1]-'0');
		char a=sx2[2],b=sy2[2];
		if(x==y)
		{
			ans+='1';
			if(a<='C'&&b<='C'||a>='D'&&b>='D')
			{
				ans+='1';
				if(abs(a-b)==1) ans+='1';
				else ans+='0';
			}else ans+="00";
		}else ans+="000";
		cout<<ans;
	}
	return 0;
}