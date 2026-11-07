#include <iostream>
#include<cstring>
using namespace std;
string s1,s2,c1,c2;
char e1,e2;
int l1,l2,p1,p2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1!=c2){
        cout<<"0000"<<endl;
        return 0;
    }
    cout<<"1";
    p1=s1[2];
    p2=s2[2];
    l1=(s1[0]-'0')*10+s1[1]-'0';
    l2=(s2[0]-'0')*10+s2[1]-'0';
    if(l1!=l2){
        cout<<"000"<<endl;
        return 0;
    }
    cout<<"1";
    if((p1<'D'&&p2<'D')||(p1>'C'&&p2>'C')){
        cout<<"1";
        if((p1>'C'&&p2>'C')||(p1<'C'&&p2<'C')||(p1<'D'&&p2<'D'&&p1>'A'&&p2>'A')){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }else{
        cout<<"00";
    }
    cout<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
