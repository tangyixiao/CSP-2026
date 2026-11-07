#include<bits/stdc++.h>
using namespace std;

bool cmp2(string a,const char* b)
{
    if(a[0]==b[0]&&a[1]==b[1])return 1;
    return 0;
}

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string s1,s2,s3,s4;
    int f1=0,f2=0,f3=0,f4=0;
    cin>>s1>>s2>>s3>>s4;
    if(s1==s3)
    {
        f1=1;
        if(s2.substr(0,2)==s4.substr(0,2))
        {
            f2=1;
            char a[3];a[0]=s2[2],a[1]=s4[2];
            sort(a,a+2);
            //cout<<a;
            if(cmp2(a,"AB")||cmp2(a,"BC")||cmp2(a,"AC")||cmp2(a,"DF"))f3=1;
            if(cmp2(a,"AB")||cmp2(a,"BC")||cmp2(a,"DF"))f4=1;
        }
    }
    
    cout<<f1<<f2<<f3<<f4;
    cout<<endl;
    return 0;
}