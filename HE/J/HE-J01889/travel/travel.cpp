#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int aa,bb,cc,dd;
	cin>>a>>b>>c>>d;
	aa=(a[0]-'0')*10+a[1]-'0';
	cc=(c[0]-'0')*10+c[1]-'0';
	bb=(b[0]-'0')*10+b[1]-'0';
	dd=(d[0]-'0')*10+d[1]-'0'; 
	if(aa==cc)
	{
		cout<<"1";
		if(bb==dd)
		cout<<"1";
		else
		{
			cout<<"000";
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
		if(b[2]>='D'&&d[2]>='D')
		cout<<"1";
		else if(b[2]<='C'&&d[2]<='C')
		cout<<"1";
		else
		{
			cout<<"00";
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
		if(abs(b[2]-d[2])==1)
		{
			if(b[2]=='C'&&d[2]=='D')
			{
				cout<<"0";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else if(b[2]=='D'&&d[2]=='c')
			{
				cout<<"0";
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			else
			cout<<"1";
		}
		else
		cout<<"0";
	}
	else
	cout<<"0000";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
02 01A 02 01B

02 01C 02 01A

02 01C 02 01D

02 02B 02 01A

02 01A 03 01A
*/ 
