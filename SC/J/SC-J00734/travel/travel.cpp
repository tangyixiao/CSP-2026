#include<bits/stdc++.h>
using namespace std;
char b[2][5];
int a[4];
int main()
{
	ifstream fin("in.txt");
	ofstream fout("out.txt");
	int c,s1,s2;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<5;j++)
		{
			fin>>b[i][j];
		}
	}
	for(int i=0;i<4;i++)
	{
		if(i<2)
		{
			if(b[0][i]==b[1][i])
			{
				c++;
			}
			if(c==2)
			{
				a[0]=1;
			}
		}
		else
		{
			if(i<4)
			{
				if(b[0][i]==b[1][i])
				{
					c++;
				}
				if(c==4)
				{
					a[1]=1;
				}
			}
			else
			{
				s1=b[0][i];
				s2=b[1][i];
				if(s1<s2)
				{
					if(s1<67)
					{
						if(s1+1==s2)
						{
							a[2]=1;
							a[3]=1;
						}
						if(s2>67)
						{
							a[2]=0;
							a[3]=0;
						}
					}
					else
					{
						if(s1>67)
						{
							a[2]=1;
							a[3]=0;
						}
					}
				}
				else
				{
					if(s1<68)
					{
						if(s1-1==s2)
						{
							a[2]=1;
							a[3]=1;
						}
					}
					else
					{
						if(s1>68)
						{
							a[2]=1;
							a[3]=0;
						}
					}
				}
				
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		fout<<a[i];
	}
	
	return 0;
} 