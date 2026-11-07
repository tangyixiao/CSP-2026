#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    string a1="0",a2="0",a3="0",a4="0";
    if(c1==c2){a1="1";}else{cout<<"0000";return 0;}
    if((s1[0]-'0')*10+s1[1]==(s2[0]-'0')*10+s2[1]){a2="1";}
    else{cout<<"1000";return 0;}
    char w1=s1[2];char w2=s2[2];
    if(w1=='A'){
        if(w2=='B'){a3="1";a4="1";}
        else if(w2=='C'){a3="1";a4="0";}
        else{a3="0",a4="0";}
    }else if(w1=='B'){
        if(w2=='A'){a3="1";a4="1";}
        else if(w2=='C'){a3="1";a4="1";}
        else{a3="0",a4="0";}
    }else if(w1=='C'){
        if(w2=='A'){a3="1";a4="0";}
        else if(w2=='B'){a3="1";a4="1";}
        else{a3="0",a4="0";}
    }else if(w1=='D'){
        if(w2=='F'){a3="1";a4="1";}
        else{a3="0",a4="0";}
    }else if(w1=='F'){
        if(w2=='D'){a3="1";a4="1";}
        else{a3="0",a4="0";}
    }
    cout<<a1+a2+a3+a4;
    return 0;
}
