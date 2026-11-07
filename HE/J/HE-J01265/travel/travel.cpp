#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    int a=0,b=0,c=0,d=0;
    if(c1==c2){
        a=1;
    }
    if(s1[0]==s2[0]&&s1[1]==s2[1]&&a==1){
        b=1;
    }
    char ch1=s1[2],ch2=s2[2];
    if(((ch1>='D'&&ch2>='D')||(ch1<='C'&&ch2<='C'))&&b==1){
        c=1;
    }
    if(abs(int(ch1)-int(ch2))==1&&c==1){
        d=1;
    }
    cout<<a<<b<<c<<d;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
