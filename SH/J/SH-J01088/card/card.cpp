#include <iostream>
#include<vector>
using namespace std;
int n,m,c[500005],ans[300005]={0};vector<int><int> a;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>c[i];
    //proved that diverse one have same endings as not diverse,O(n*m)
    for(int i=n;i>=1;i--){
        if(a[i+1][c[i]]==0)a[i][c[i]]=i;
        else for(int j=1;j<=m;j++)a[i][j]=a[a[i+1][c[i]]][j];
        for(int j=1;j<=m;j++){
            if(a[i][j]>=0)ans[j]++;
        }
    }
    for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
    cout<<endl;
    return 0;
}
