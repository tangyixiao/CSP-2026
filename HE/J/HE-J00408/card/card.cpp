#include<iostream>
using namespace std;
int a[500002];
int c[500002];
int s[300002];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    bool A=1;
    int last=-1;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        if(a[i]<last){
            A=0;
            last=5e5;
        }else{
            last=a[i];
        }
    }
    if(A){
        for(int i=1;i<=n;++i){
        int top=1;
        for(int k=i;k<=n;++k){
            int f=0;
            if(a[k]<=c[top-1]){
                f=top-1;
            }
            if(f){
                top=f;
            }
            c[top]=a[k];
            top++;
        }
        for(int j=1;j<top;++j){
            s[c[j]]++;
        }
    }
    for(int i=1;i<=m;++i){
        cout<<s[i]<<" ";
    }
    }
    for(int i=1;i<=n;++i){
        int top=1;
        for(int k=i;k<=n;++k){
            int f=0;
            for(int j=1;j<top;++j){
                if(a[k]==c[j]){
                    f=j;
                    break;
                }
            }
            if(f){
                top=f;
            }
            c[top]=a[k];
            top++;
        }
        for(int j=1;j<top;++j){
            s[c[j]]++;
        }
    }
    for(int i=1;i<=m;++i){
        cout<<s[i]<<" ";
    }
    return 0;
}
