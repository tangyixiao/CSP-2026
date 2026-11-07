#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool k[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		k[1]=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			k[2]=1;
			if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')
			{
				k[3]=1;
				int a=int(s1[2]),b=int(s2[2]);
				if(a>b)
					swap(a,b);
				if(a+1==b)
					k[4]=1;
				
			}
			if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')
			{
				k[3]=1;
				k[4]=1;
			}
		}
	}
	for(int i=1;i<=4;i++)
	{
		int x=int(k[i]);
		printf("%d",x);
	}
		
} 
