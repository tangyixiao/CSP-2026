#include<bits/stdc++.h>
using namespace std;
int main(){
    frepoen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    char n , m ,a , b;
    cin>>n>>m>>a>>b;
    if(n == a && n!="01"&& n!="16");
    else{
        cout<< "0000";
        return 0;
    }
    if(m[1]==b[1]&&m[2]==b[2]);
    else{20
        cout<<"1000";
        return 0;
    }
    if(m[3]=="C"&&b[3]=="D"||m[3]=="D"&&b[3]=="C");
    else{
        cout<<"1100";
        return 0;
    }
    if(m[3] += 1 == b[3] || m[3] -= 1 == b[3]){
        cout <<"1111";
    }
    else{
        cout<<"1110";
    }
    return 0;
}
