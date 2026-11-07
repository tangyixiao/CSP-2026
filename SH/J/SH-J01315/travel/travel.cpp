#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    bool flag1=true;
    bool flag2=true;
    int a=s1[2]-'A'+1;
    int b=s2[2]-'A'+1;
    for(int i=0;i<c1.size();i++){
        if(!(c1[i]==c2[i])){
             flag1=false;
        }
    }
    if(flag1==true){
        cout << 1;
    }
    for(int j=0;j<s1.size()-1;j++){
        if(flag1==false){
            cout << 0<<0<<0<<0;
            return 0;
        }else{
            if(!(s1[j]==s2[j])){
                flag2=false;
            }
        }
    }
    if(flag2==true){
        cout << 1;
    }
    else{
        cout<<0<<0<<0;
        return 0;
    }
    if((a<4)&&(b<4)){
        cout << 1;
    }
    else if((a>3)&&(b>3)){

        cout << 1;
    }
    else{
        cout << 0;
    }
    if(abs(a-b)==1&&(a*b)!=12){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}
