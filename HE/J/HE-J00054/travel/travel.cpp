#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    bool flag=true;
    string C1,S1,C2,S2;
    cin >> C1 >> S1 >> C2>>S2;
    for(int i=0;i<2;i++)
    {

        if(C1[i]==C2[i])
        {
            flag=false;
        }
    }
    if(flag==false)
    {

        cout <<"1111";
        return 0;
    }
    else
    {
        cout <<"1";
    }
    flag=true;
    if(S1[1]=='01A'||S1[1]=='01B'||S1[1]=='01C'||S1[1]=='01D'&&C1[0]=='02'&&C2[2]=='02'&&S2[3]=='01A'||S2[3]=='01B'||S2[3]=='01C'||S2[3]=='01D')
    {

        cout << "1111";
    }
    else
    {

        cout << "0000";
    }


    return 0;
}
