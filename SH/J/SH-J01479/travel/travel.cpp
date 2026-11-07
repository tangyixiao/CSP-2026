#include<bits/stdc++.h> 
using namespace std;
int main()
{freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
string c1,s1,c2,s2;
cin>>c1>>s1>>c2>>s2;
if(c1!=c2)cout<<"0000";
else
{cout<<"1";
if((s1[0]!=s2[0])||(s1[1]!=s2[1]))cout<<"000";
else
{cout<<"1";
bool r1=0,r2=0;
if((s1[2]=='D')||(s1[2]=='F'))r1=1;
if((s2[2]=='D')||(s2[2]=='F'))r2=1;
if(r1!=r2)cout<<"00";
else
{cout<<"1";
if(r1==1)cout<<"1";
else
{if(max(s1[2],s2[2])-min(s1[2],s2[2])==1)cout<<"1";
else cout<<"0";
}
}
}
}
fclose(stdin);fclose(stdout);
return 0;
}
