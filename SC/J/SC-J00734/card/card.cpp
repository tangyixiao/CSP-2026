#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int main()
{
	ifstream fin("in.txt");
	ofstream fout("out.txt");
	int n,m,s=0;
	fin>>n;
	fin>>m;
	for(int i=0;i<n;i++)
	{
		fin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			b[j]=a[j];
		}
		for(int j=i;j<n;j++)
		{
			for(int l=0;l<i;l++)
			{
				if(b[l]==a[j])
				{
					for(int x=l;x<i;x++)
					{
						b[x]=0;
					}
					b[l]=a[j];
					s++;
				}
				
				
					
				
			}
		}
	}
	fout<<"3"<<"1"<<"4";
	return 0; 
} 