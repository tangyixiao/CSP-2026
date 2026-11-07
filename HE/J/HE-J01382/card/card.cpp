#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in",'r',stdin);
    freopen("card.out",'w',stdout);
    string a[50020],b[50020];
    int n,m;
    int ans1,ans2;
    for(int i = 0;i <= n;i++){
        cin >> a[i];
        for(int j = n - i + 1;j <= i;j++){
            cin >> b[j];
            if(a[j] == a[i]){
                //clear word after that
                for(int x = 0;x <= i;X++){
                        if(a[x] == 1) ans1++;
                        if(a[x] == 2) ans2++;
                }
            }
        }
    }
    cout << ans1 << " "<< ans2;
    
    return 0;
}
