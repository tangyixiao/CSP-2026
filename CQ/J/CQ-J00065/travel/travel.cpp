#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
map<pair<char,char>,bool> tp,nr;
void die(string str){
    cout<<str;
    exit(0);
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2) cout<<1;
    else die("0000");
    string p1,p2;
    p1+=s1[0];p1+=s1[1];
    p2+=s2[0];p2+=s2[1];
    if(p1==p2) cout<<1;
    else die("000");
    for(char c1='A';c1<='C';c1++){
        for(char c2='A';c2<='C';c2++){
            tp[{c1,c2}]=true;
        }        
    }
    tp[{'D','F'}]=tp[{'F','D'}]=true;
    if(tp[{s1[2],s2[2]}]) cout<<1;
    else die("00");
    nr[{'A','B'}]=nr[{'B','A'}]=nr[{'C','B'}]=nr[{'B','C'}]=nr[{'D','F'}]=nr[{'F','D'}]=true;
    if(nr[{s1[2],s2[2]}]) die("1");
    else die("0");
}

