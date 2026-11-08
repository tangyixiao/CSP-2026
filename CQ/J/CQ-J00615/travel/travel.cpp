#include<bits/stdc++.h>
using namespace std;

int a[6];

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string s1,s2,s3,s4;
	cin>>s1>>s3>>s2>>s4;
	
	if(s1==s2)
	{
		a[1]=1;
		int h1=(s3[0]-'0')*10+(s3[1]-'0');
		int h2=(s4[0]-'0')*10+(s4[1]-'0');
		int w1=s3[2]-'A'+1;
		int w2=s4[2]-'A'+1;
		
		if(h1==h2) a[2]=1,a[3]=1;
		if((w1<=3&&w2<=3)||(w1>3&&w2>3)) a[3]&=1; 
		else a[3]&=0;
		
		if(h1==h2&&(w1-w2==1||w2-w1==1)&&w1+w2!=7) a[4]=1;
		if((h1-h2==1||h2-h1==1)&&w1==w2) a[4]=1;
				
	}
	
	for(int i=1;i<=4;i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
