#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,e,f;
	char c,d;
	bool a1=0,a2=0,a3=0,a4=0;
	cin>>a>>e>>c>>b>>f>>d;
	if(a==b) a1=1;
	if(e==f&&a1==1) a2=1;
	if(a2==1&&int(c)<=67&&int(d)<=67) a3=1;
	else if(a2==1&&int(c)>67&&int(d)>67) a3=1;
	if(a3==1)
	 if(int(c)-int(d)==1||int(d)-int(c)==1)
		 if(int(c)!=68&&int(d)!=67||int(c)!=67&&int(d)!=68) a4=1;
	cout<<a1<<a2<<a3<<a4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
