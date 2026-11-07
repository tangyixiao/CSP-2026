#include<bits/stdc++.h>
using namespace std;
int cn,sn,q,a,z;
string cm,sm;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>cn>>cm>>sn>>sm;
    if(cn!=sn)
    {
     cout<<0000;
     return 0;
    }
    cout<<1;
    q=1;
    if(cm[0]==sm[0]&&cm[1]==sm[1]){
        a=1;
        cout<<1;
    }
    else{
        cout<<000;
        return 0;
    }
    if(cm[2]=='A'||cm[2]=='B'||cm[2]=='C'||sm[2]=='A'||sm[2]=='B'||sm[2]=='C'||sm[2]=='F'
       ||sm[2]=='F'&&cm[2]=='D'||sm[2]=='D'&&cm[2]=='F')
    {

        if((sm[2]=='C'&&cm[2]=='D')||(sm[2]=='D'&&cm[2]=='C'))
            cout<<0;

        else{
            cout<<1;
        }
    }
    if((cm[2]=='A'&&sm[2]=='B')||(cm[2]=='B'&&sm[2]=='C')||(cm[2]=='C'&&sm[2]=='B')
       ||(cm[2]=='B'&&sm[2]=='A')||(cm[2]=='F'&&sm[2]=='D')||(cm[2]=='D'&&sm[2]=='F'))
        z=1;
    if(q&&a&&z)
        cout<<1;
    else
        cout<<0;
    return 0;
}
