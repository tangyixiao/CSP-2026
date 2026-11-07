#include<iostream>
using namespace std; 
const int N=1e5+9;
int abs(int x){
    if(x<0)return -x;
    return x;
}
struct node{
    int room,x/*1-18*/,y/*A-f,1-5*/,c;
    void in(){
        cin>>room;
        char c1,c2,c3;
        cin>>c1>>c2>>c3;
        x=(c1-'0')*10+c2-'0';
        y=c3-'A'+1;
        if(y>=4)c=1;
        else c=0;
    }
}q,p;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    q.in(),p.in();
    bool q1=q.room==p.room;
    bool q2=q1&&q.x==p.x;
    bool q3=q2&&q.c==p.c;
    bool q4=q3&&abs(q.y-p.y)==1;
    cout<<(int)q1<<(int)q2<<(int)q3<<(int)q4;
    return 0;
}