#include<bits/stdc++.h>
using namespace std;
int a[20][10];
int main()
{
	freopen("travel,in","r",stdin);
	freopen("travel,out","w",stdout);
	int c1,s1;//小R 的车票上的车厢号、座位号
	int c2,s2;//小X 的车票上的车厢号、座位号
	cin>>c1>>s1>>c2>>s2;
 int n=5;
	int m=18;
	for(int i=1;i<=n;i++)
	{
for(int z=1;z<=m;z++)
{

          int F=a[i][1];
		  int D=a[i][2];
		  int C=a[i][3];
		  int B=a[i][4];
		  int A=a[i][5];
		  c1=i;
		  c2=i;
		  s1=z;
		  s2=z;
		  cin>>c1>>c2>>s1>>s2;
          if(c1==c2&&s2!=D&&s1!=C&&s2!=C&&s1!=D)
		  {
             cout<<1111;
		  }
		  else if(c1==c2&&s2==s1+1&&s2==s1-1)
		  {
		  	cout<<1110;
		  }
		 else if(c1==c2&&s2=='D'&&s1=='C'&&s2=='C'&&s1=='D')
		  {
		  	cout<<1100;
		  }
		   else if(c1==c2&&a[c2][s2]!=a[c1][s1]+1&&a[c2][s2]!=a[c1][s1]-1)
		  {
		  	cout<<1000;
		  }
		  else if(c1!=c2&&a[c2][s2]!=a[c1][s1]+1&&a[c2][s2]!=a[c1][s1]-1)
		  {
		  	cout<<0000;
		  }
}

}
return 0;
}