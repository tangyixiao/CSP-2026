#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ca,cb;
bool check(char e1,char e2,char f1,char f2)
{
    int e=(e1=='1')*10+int(e2)-64;
    int f=(f1=='1')*10+int(f2)-64;

    if(e==f+1||e==f-1)
    {

        return 1;
    }return false;
}
int k=0;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    
    if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')&&(s1[2]=='D'||s1[2]=='F')))
    {
        k++;
    }
    k++;
    if(s1[2]=='A'&&s2[2]=='B')
    {
        k++;
    }
    if(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C'))
    {
        k++;
    }
    if(s1[2]=='C'&&s2[2]=='B')
    {
        k++;
    }
    if(s1[2]=='D'&&s2[2]=='F')
    {
        k++;
    }
    if(s1[2]=='F'&&s2[2]=='D')
    {
        k++;
    }
	if(c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	if(s1[0]!=s2[0]||s1[1]!=s2[1])
	{
		cout<<"1000";
		return 0;
	}
	
    if(k>=3)cout<<1111;
    if(k==2)cout<<1110;
    if(k==1)cout<<1100;
    
    
    return 0;
}
