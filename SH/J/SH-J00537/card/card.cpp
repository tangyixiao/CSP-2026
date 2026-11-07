#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin >> n >> m;
    int a[n+5];
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    int result[n+5];
    bool ishad=1;
    for (int c=1;c<=m;c++){
    for (int i=1;i<=n;i++){
        int sum=0;
        for (int k=i-1;k<=n;k++){
            ishad=1;
            for (int j=i-1;j<=n;j++){
                if (result[j]==a[k]){
                    for (int b=i-1;b<=n;b++){
                        result[b]==0;
                    }
                    ishad=0;
                }
            }
            if (ishad==1){
                result[k]=a[k];
            }
        }
        for (int s=1;s<=n;s++){
            if (c==result[s]){
                sum++;
            }
        }
        cout << sum;
        int result[n+5]={};
    }
    }
return 0;
}
