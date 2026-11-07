#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin >> c1 >> s1>>c2 >> s2;
    if(c1==c2)
    {
        cout << 1;

    }
    else
    {
        cout << 0 << 0 << 0 << 0;
        return 0;
    }
    string l=s1.substr(2);
    string o=s2.substr(2);
    string m=s1.substr(0,1);
    string n=s2.substr(0,1);

    if(m==n)
    {
       cout<< 1;
    }
    else
    {
        cout << 0 << 0 << 0;
        return 0;
    }



    if((l=="D"&&o=="F")||(o=="D"&&l=="F")||((l!="D"&&o!="F")&&(o!="D"&&l!="F")))
    {
       cout<< 1;
    }
    else
    {
        cout << 0 << 0;
        return 0;
    }
    if((l=="D"&&o=="F")||(o=="D"&&l=="F")||(l=="A"&&o=="B")||(o=="B"&&l=="C")||(l=="A"&&o=="B")||(l=="B"&&o=="C"))
    {
       cout<< 1;
    }
    else
    {
        cout << 0 ;
    }
    return 0;

}
