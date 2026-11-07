#include<bits/stdc++.h>
using namespace std;
long long a,b,n,ans=0;
char s;
string l1,l2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a;
    int j=0;
    for(int i=0;i<a;i++){
        cin>>b>>s;
        for(int m=0;m<b;m++){
            j++;
            l1[j]=s;
        }
    }
    int m=0;
    for(int i=j;i>=0;i--){
        l2[m]=l1[j];
        m++;
    }
    for(int i=0;i<=j/2;i++){
        if(l1[i]!=l2[i]){
            ans+=1;
        }
    }
    cout<<ans;
    return 0;
}
