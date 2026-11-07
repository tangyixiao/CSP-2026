#include<bits/stdc++.h>
using namespace std;
int main(){

    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string C1,S1,C2,S2;
    cin>>C1>>S1>>C2>>S2;
    int n[100],m[100];

    if(C1 != C2){
        cout<<"0000";
    }
    else{
        cout<<"1";

            n[0]=S1[0];
            m[0]=S2[0];
            n[1]=S1[1];
            m[1]=S2[1];
            n[2]=S1[2];
            m[2]=S2[2];
            if(n[0] != m[0] || n[1] != m[1]){
                cout<<"000";

            }
            else {
                cout<<"1";
                if( n[2]=='C' && m[2]=='D' || m[2]=='C' && n[2]=='D'){
                    cout<<"00";


                }
                else{
                        cout<<"1";
                        if(n[2] != m[2]+1 || n[2] != m[2]-1 ){

                            cout<<"0";

                        }
                        else{
                            cout<<"1";

                        }


                }

            }



    }












    return 0;
}
