#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
   string c1,s1,c2,s2;
   cin>>c1>>s1>>c2>>s2;

  
   //是否在同一节车厢
   if(c1==c2)  cout<<1;
   else cout<<0;
   //是否在同一车厢的同一排
   int ans1=0;
   int ans2=0;
   for(int i=0;i<=1;i++) 
   {
   	ans1+=(s1[i]-'0')+ans1*10;
   	ans2+=(s2[i]-'0')+ans2*10;
   	 
   }
   if(ans1==ans2) cout<<1;
   else cout<<0;
   //是否在同一侧
   bool f=0;
   char a1=s1[s1.size()-1] ; 
   char a2=s2[s2.size()-1] ; 
   if(ans1==ans2)
   {
   	if((a1=='A'||a1=='B'||a1=='C')&&(a2=='D'||a2=='F'))
   		{cout<<0;
		   }
   	else if((a2=='A'||a1=='B'||a1=='C')&&(a1=='D'||a2=='F'))
   		{cout<<0;
		   }
   	else {cout<<1;
   	f=1;
	   }
   }
   else cout<<0;
   //是否相邻
    if(f==1)
    {
    	if(abs(a1-a2)==1)
    	cout<<1;
    	else cout<<0; 
	}
	else cout<<0;
	
    return 0;
}
