#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen(travel.in,"r",stdin);
    freopen(travel.out,"w",stdout);
    int n;
    string c1,c2=,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    if(c1==c3){
            n+=1000;
        if(c2==c4&&c2!='C'&&c4!='D'){
            n+=111;
        }else if(c2==c4&&c2=='C'&&c4=='D'){
            n+=110;
        }else{
            n+=100;
        }

    }
    return 0;
}
