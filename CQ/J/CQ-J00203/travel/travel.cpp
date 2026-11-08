#include<bits/stdc++.h>
#define ll long long
using namespace std;
string c1,s1,c2,s2;
int z3,z4;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1==c2){
        cout << 1;
    }
    else{
        cout << "0000" << endl;
        return 0;
    }
    int p1=(s1[0]-'0')*10+(s1[1]-'0');
    int p2=(s2[0]-'0')*10+(s2[1]-'0');
    char z1=s1[2];
    char z2=s2[2];
    if(p1==p2){
        cout << 1;
    }
    else{
        cout << "000" << endl;
        return 0;
    } 
    if((z1>='A'&&z1<='C'&&z2>='A'&&z2<='C')||((z1=='D'||z1=='F')&&(z2=='D'||z2=='F'))){
        cout << 1;
    }
    else{
        cout << "00" << endl;
        return 0;
    }
    int z3=z1-'A'+1;
    int z4=z2-'A'+1;
    //cout << endl << z3 << "     " << z4 << endl;
    if(z3==4){
        z3=5;
    }
    if(z4==4){
        z4=5;
    }
    if(abs(z3-z4)==1){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
        return 0;
    }
    return 0;
}