#include <bits/stdc++.h>
using namespace std;
int main()
{
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);



int c1,c3;
int x1=0,x2=0,x3=0,w1=0,w2=0;
    string c2,c4;
    cin>>c1>>c2>>c3>>c4;
    if(c1==01 || c1==16 || c3==01 || c3==16)
    {
        cout<<"0000";
    }
    if(c2[2]=='A' || c2[2]=='B' || c2[2]=='C')
    {
        x1++;
    }

    if(c4[2]=='A' || c4[2]=='B' || c4[2]=='C')
    {
        x2++;
    }
   if(c2[2]=='A' && c4[2]=='C')
   {
       w1++;
   }
     if(c2[2]=='C' && c4[2]=='A')
    {
        w2++;
    }




    if(c2[2]=='F' && c4[2]=='D')
    {
        x1++;
        x2++;
        x3++;
    }

if(c2[2]=='D' && c4[2]=='F')
    {
        x1++;
        x2++;
        x3++;
    }

if(c1==c3)
{
    cout<<"1";
    if(c2[0]==c4[0] && c2[1]==c4[1])
    {
        cout<<"1";
        if(x1==x2)
        {
            cout<<"1";


            if(x3==1)
            {
                cout<<"1";
                return 0;
            }
            if(w1==1 || w2==1)
            {
                cout<<"0";
                return 0;
            }

            else if(w2==0 && w1==0)
            {
                cout<<"1";
                return 0;
            }





        }
        else
            {cout<<"00";


            }



    }
    else
    {
        cout<<"000";
    }

}
else
{
    cout<<"0000";
}


    return 0;
}
