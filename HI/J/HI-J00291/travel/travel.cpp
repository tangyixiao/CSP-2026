#include<bits/stdc++.h>
using namespace std;
long long a,b;
string s1,s2;
int main()
{
				freopen("traval.in","r",stdin);
				freopen("traval.out","w",stdout);
				cin>>a>>s1>>b>>s2;
				if(a==b)
				{
								cout<<1;
								long long t1=(s1[0]-'0')*10+(s1[1]-'0'),t2=(s2[0]-'0')*10+(s2[1]-'0');
								if(t1==t2)
								{
												cout<<1;
												char c1=s1[2],c2=s2[2];
												if((c1=='A'&&c2=='B')||(c1=='B'&&c2=='A')||(c1=='A'&&c2=='C')||(c1=='C'&&c2=='A')||(c1=='B'&&c2=='C')||(c1=='C'&&c2=='B')||(c1=='D'&&c2=='F')||(c1=='F'&&c2=='D'))
												{
																cout<<1;
																if(c1=='D'||c1=='F')
																cout<<1<<endl;
																else if(c1=='B'||c2=='B')
																cout<<1<<endl;
																else
																cout<<0<<endl;
												}
												else
												{
																cout<<"00"<<endl;
												}
								}
								else
								{
												cout<<"000"<<endl;
								}
				}
				else
				{
					   cout<<"0000"<<endl;				   
				}
}
