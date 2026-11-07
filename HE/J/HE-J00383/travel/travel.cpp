#include <bits/stdc++.h>
using namespeace std;
int main()
{

	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[1000005],b[100005],c[100005],d[1000005];
	for(int i=0;i<=4;i++){
		cin>>a>>b>>c>>d;
	}
	if(a[1]=c[1])
    {
        cout<<"1";
    }
    if(b[1]=d[1])
    {
        cout<<"1";
    }
    if(b[2]=='F'||b[2]=='D'&&d[2]=='F'||d[2]=='D')
    {
        cout<<"11";
    }
    else if(b[2]=='C'&&d[2]=='B'||b[2]=='B'&&d[2]=='A'||d[2]=='C'%%b[2]=='B'&&d[2]=='B'||b[2]=='A')
    {
        cout<<"11";
    }
    return 0;
}
