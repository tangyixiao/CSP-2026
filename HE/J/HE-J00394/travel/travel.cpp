#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    char s11,s22,s33,s44,s55,s66;
    s11=s1[1];
    s22=s2[1];
    s33=s1[2];
    s44=s2[2];
    s55=s1[0];
    s66=s2[0];

    if(c1==c2){
        cout<<1;
        if(s55+s11==s66+s22){
            cout<<1;
            if((s33>='A'&&s33<='C'&&s44>='A'&&s44<='C')||(s33>='D'&&s33<='F'&&s44<='F'&&s33>='D')){
                cout<<1;
                if(s33=='C'||s44=='D'){
                        if(s33-1==s44||s44+2==s33)  cout<<1;
                        else    cout<<0;
                        }
                else if(s33=='D'&&s33+2==s44)	cout<<1;
				else   if(s33+1==s44||s33-1==s44)  cout<<1;
                else    cout<<"0";

                }
            else    cout<<"00";
            }
        else    cout<<"000";




    }
    else    cout<<"0000";



    return 0;
    }



