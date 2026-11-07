#include<iostream>
#include<cstring>
using namespace std;
const int MAX_N=500064;
const int MAX_M=300064;
int n, m, a[MAX_N], stk[MAX_N], top, ans[MAX_M], nmap[MAX_M];
/*void show_stk(){
    for(int i=0;i<top;i++)
        cout<<stk[i]<<' ';
    cout<<'\n';
}*/
int main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        memset(nmap, -1, sizeof(nmap));
        top=0;
        for(int j=i;j<=n;j++){
            if (nmap[a[j]]!=-1){
                for(int k=nmap[a[j]]+1;k<top;k++)
                    nmap[stk[k]]=-1;
                top=nmap[a[j]];
                //cout<<"top:"<<top<<'\n';
            }
            nmap[a[j]]=top;
            stk[top++]=a[j];
            //show_stk();
        }
        for(int j=0;j<top;j++)
            ans[stk[j]]++;
    }
    for(int i=1;i<=m;i++)
        cout<<ans[i]<<' ';
    return 0;
}
