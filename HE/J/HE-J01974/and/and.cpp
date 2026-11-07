#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

using ll=long long;


ll nums[200005];
int n,m;

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    ll mx=-1;
    if(m==2){
            for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mx=max(mx,nums[i]&nums[j]);
        }
    }
    }
    if(m==3){
            for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                    for(int k=j+1;k<n;k++){
            mx=max({mx,nums[i]&nums[j]&nums[k]});
        }
        }
    }
    }

    cout<<mx;


    fclose(stdin);
    fclose(stdout);
    return 0;
}
