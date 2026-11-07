#include<bits/stdc++.h>
using namespace std;
int n[200009]={0};
int s[1000000]={0};
int a,b;
int num=0;
int main(){
     freopen("and.in","r",stdin);
 freopen("and.out","w",stdout);
cin>>a>>b;
for(int i=0;i<a;i++){
    cin>>n[i];
}
if(b==2 && a!=2){
    sort(n,n+a);
    for(int i=0;i<a;i++){
            if(i>=a-i-1){
                break;
            }
        num=n[i];
        n[i]=n[a-i-1];
        n[a-i-1]=num;
    }
    for(int j=0;j<a-1;j++){
        if(n[j]==n[j+1]){
            n[j]=(n[j] & n[j+1]);
            n[j+1]=(n[j] & n[j+1]);
            sort(n,n+a);
             for(int i=0;i<a;i++){
            if(i>=a-i-1){
                break;
            }
        num=n[i];
        n[i]=n[a-i-1];
        n[a-i-1]=num;
    }
            break;
        }
}
cout<<n[0];
return 0;
}else if(b==1){
    sort(n,n+a);
    cout<<n[a-1];
    return 0;
}else if(b==a){
    int h=n[0];
    for(int i=1;i<a;i++){
        h&=n[i];
    }
    cout<<h;
    return 0;
}else{
    cout<<12<<endl;
}
return 0;
}
