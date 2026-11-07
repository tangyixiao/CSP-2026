#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<char,int> mp;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    mp['A']=1;
    mp['B']=2;
    mp['C']=3;
    mp['D']=5;
    mp['F']=6;
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    string sa1=s1.substr(0,2);
    string sa2=s2.substr(0,2);
    if(c1==c2)cout<<1;
    else cout<<0;
    if(c1==c2&&sa1==sa2)cout<<1;
    else cout<<0;
    bool mk1=(s1[2]>='D');
    bool mk2=(s2[2]>='D');
    if(c1==c2&&sa1==sa2&&mk1==mk2)cout<<1;
    else cout<<0;
    if(c1==c2&&sa1==sa2&&abs(mp[s1[2]]-mp[s2[2]])==1)cout<<1;
    else cout<<0;
    return 0;
}
