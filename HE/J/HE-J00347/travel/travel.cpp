#include<bits/stdc++.h>
using namespace std;
string c1,s1,s2,c2;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int c1,c2,s1,s2;
    cin>>c1>>c2>>s1>>s2;
    if(c1==c2)
    {
        cout<<"1";
    }
    else
    {
    	cout<<"0000";
    	return 0;
	}
    if(s1-'A'||'B'||'C'||'D'||'F'==s2-'A'||'B'||'C'||'D'||'F'0)
     {
         cout<<"1";
     }
     else
     {
         cout<<"000";
         return 0;
     }
     if(s1-'A'||'B'||'C'==s2-'A'||'B'||"C"&&s1=='D'||'F' && s2 == 'D'||'F')
     {
         cout<<"1";
     }
     else
     {
         cout<<"000";
     }
      if(s1-1||s1+1==s2)
     {
         cout<<"1";
     }
     else
     {
         cout<<"0";
     }
    return 0;
}
