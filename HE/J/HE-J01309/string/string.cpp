#include<iostream>
#include<cstring>
using namespace std;
string x,y;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,b,c=0,d,i,j;
	char g;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		cin>>b>>g;
		for(j=1;j<=b;j++)
		{
			x=x+g;
		}
	}
	d=x.size();
	d--; 
	for(i=0;i<=d/2;i++)
	{
		if(x[i]!=x[d-i])c++;
	}
	cout<<c;
	return 0;
	fclose(stdin);
	fclose(stdout); 
}
