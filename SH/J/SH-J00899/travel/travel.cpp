#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    //≥µœ·∫≈ 
    int c01,c02;
    if(c1[0]=='0')c01=(c1[1]-'0');
    else c01=10+(c1[1]-'0');
	//cout<<c01; 
	if(c2[0]=='0')c02=(c2[1]-'0');
    else c02=10+(c2[1]-'0');
	//≈≈ ˝ 
	int p1,p2;
	if(s1[0]=='0')p1=(s1[1]-'0');
    else p1=10+(s1[1]-'0');
	if(s2[0]=='0')p2=(s2[1]-'0');
    else p2=10+(s2[1]-'0');
	//◊˘Œª ˝
	int a1,a2;
	a1=s1[2]-'A'+1; 
	a2=s2[2]-'A'+1; 
	if(a1==6)a1=5;
	if(a2==6)a2=5;
	
	//≈–∂œ1
	if(c01==c02)
	{
		cout<<1;
		//≈–∂œ2
		if(p1==p2){
			cout<<1;
			//≈–∂œ3
			if(((a1==4|| a1==5)&&(a2==4 || a2==5))||((a1==1|| a1==2|| a1==3)&&(a2==1 || a2==2|| a2==3)))
			{
				cout<<1;
				//≈–∂œ4
				if(abs(a1-a2)==1 && min(a1,a2)!=3) cout<<1;
				else cout<<0;
			} 
			else cout<<0<<0;
			
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;

	 
	
    return 0;
}
