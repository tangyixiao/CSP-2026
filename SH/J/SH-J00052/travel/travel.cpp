#include<bits/stdc++.h>
using namespace std;

bool my_same(char a,char b)
{
    if((a>='A')&&(a<='C'))
    {
        if((b>='A')&&(b<='C'))
        {
            return true;
        }
    }

    if((a=='D')||(a=='F'))
    {
        if((b=='D')||(b=='F'))
        {
            return true;
        }
    }
    return false;
}

bool my_next(char a,char b)
{
    int t=a-b;
    return (t==1)||(t==-1);
}

int main()
{
    string c1,s1,c2,s2;
    char xc1[100],xs1[100],xc2[100],xs2[100];

    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    scanf("%s %s %s %s",xc1, xs1, xc2, xs2);
    c1=xc1;
    s1=xs1;
    c2=xc2;
    s2=xs2;
    string ans="0000";
    //problem1
    if(c1==c2)
    {
         ans[0]='1';
        //problem2
        if(s1[0]==s2[0])
        {
		    if(s1[1]==s2[1])
    		{
	    		ans[1]='1';
	    		//problem3
                if(my_same(s1[2],s2[2]))
                {
                    ans[2]='1';
                    //problem4
                    if(my_next(s1[2],s2[2]))
                    {
                        ans[3]='1';
                    }
                }

            }
        }
    }


    printf("%s",ans.c_str());
    //printf("%s %s %s %s",xc1,xs1,xc2,xs2);
    return 0;
}
