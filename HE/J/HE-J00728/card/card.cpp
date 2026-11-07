#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    int n,m,tmp,sum=1;
    cin>>n>>m;
    int m1[m+1]={0};
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    while(sum){
        sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<b.size();j++){
                if(a[i]==b[j] && b[j]!=0){
                    for(int x=j;x<b.size();x++) b[x]=0;
                    a[i]=0;
                }
            }
            if(a[i]!=0) b.push_back(a[i]);
        }
        for(int i=1;i<=m;i++){
            for(int j=0;j<b.size();j++){
                if(i==b[j]) m1[i]++;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=0) sum++;
        }

    }
    for(int i=1;i<=m;i++) cout<<m1[i];

    return 0;
}
