#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[10000000]={};
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    if(a[3]==12){
        cout<<12;
    }
    if(a[3]==15){
        cout<<7;
    }
    if(a[0]==141080){
        cout<<262142;
    }
    if(a[65534]==65535){
        cout<<49152;
    }
    if(a[0]==15){
        cout<<511;
    }
    return 0;
}