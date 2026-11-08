#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int >
#define pll pair<long long ,long long >

using namespace std;
string str1,str2,str3,str4;
unordered_map<char,int >ump;
void sol(){
    ump['A']=1;
    ump['B']=2;
    ump['C']=3;
    ump['D']=100;
    ump['F']=101;

    cin>>str1>>str2>>str3>>str4;
    int a=0,b=0;
    for(auto i:str1){
        a*=10;
        a+=(i-'0');
    }
    for(auto i:str3){
        b*=10;
        b+=(i-'0');
    }
    int ans1=0,ans2=0,ans3=0,ans4=0;
    char ch1,ch2;
    int c=0,d=0;

    for(auto i:str2){
        if(i>='0'&&i<='9'){
            c*=10;
            c+=(i-'0');
        }
        else{
            ch1=i;
        }
    }
    for(auto i:str4){
        if(i>='0'&&i<='9'){
            d*=10;
            d+=(i-'0');
        }
        else{
            ch2=i;
        }
    }
    ans1=(a==b);
    ans2=(c==d)&&ans1;
    ans3=(abs(ump[ch1]-ump[ch2])<=2)&&ans2;
    ans4=(abs(ump[ch1]-ump[ch2])<=1)&&ans2;
    cout<<ans1<<ans2<<ans3<<ans4;

}
signed main(){
    //ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    
    int t=1,c;
    //cin>>t;
    //cin>>c;
    while(t--){
        sol();
    }
    //cerr<<'\n'<<clock()<<'\n';
    return 0;
}
/*
author:_aa_

*/