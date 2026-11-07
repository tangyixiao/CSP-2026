#include<bits/stdc++.h>
using namespace std;
long long num[200009]={0};
char sum[200009]={0};
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long m=0;
int a=0;
cin>>a;
for(int i=0;i<a;i++){
    cin>>num[i]>>sum[i];
}
int flagl=0;
int flagr=a;
for(int i=0;;i++){
    if(sum[flagl]!=sum[flagr]){
        if(num[flagl]>num[flagr]){
        m=m+min(num[flagr],num[flagl]);
        num[flagl]=num[flagl]-num[flagr];
        flagr-=1;
        }else if(num[flagr]>num[flagl]){
        m=m+min(num[flagl],num[flagr]);
        num[flagr]=num[flagr]-num[flagl];
        flagl+=1;
        }else{
            m=m+num[flagl];
            flagl++;
            flagr--;
        }
    }else if(sum[flagl]==sum[flagr]){
        if(num[flagl]>num[flagr]){
        num[flagl]=num[flagl]-num[flagr];
        flagr-=1;
        }else if(num[flagr]>num[flagl]){
        num[flagr]=num[flagr]-num[flagl];
        flagl+=1;
        }else{
            flagl++;
            flagr--;
        }
    }
if(flagl>=flagr){
    break;
}
}

cout<<m;
return 0;
}
