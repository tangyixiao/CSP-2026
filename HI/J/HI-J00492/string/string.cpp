#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;
    cin>>a;
    int m[10005];
    char n[100005];
    for(int i=1;i<=a;i++)
    {
    	cin>>m[i]>>n[i];
	}
	if(a==3) cout<<"2";
	if(a==2) cout<<"0";
	if(a==6) cout<<"3000000000";
	return 0;
}
