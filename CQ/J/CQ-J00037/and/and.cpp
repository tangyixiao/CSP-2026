#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    if(!(cin>>n>>m))return 0;
    vector<int>a(n);
    for (int i =0 ; i<n;++i){
        cin>>a[i];
    }
    int ans =0;
    for(int i=30;i>=0;--i){
        int candidate = ans|(1<<i);
        int cnt = 0;
        for (int j=0;j<n;++j){
            if ((a[j] & candidate)==candidate){
                cnt++;
            }

        }
        if (cnt>=m){
            ans=candidate;

        }
    }
    cout <<ans;
    return 0;
}
