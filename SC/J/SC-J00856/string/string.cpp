#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin >> n;
    vector<char> a;
    long long int ai=0,b=0,cnt=0;
    char ci;
    for(int i=0;i<n;i++){
        cin >> ai >> ci;
        for(int j=0;j<ai;j++){
            a.push_back(ci);
            b++;
        }
    }
    for(int i=0;i<b/2;i++){
        if(a[i]!=a[b-i-1]){
            cnt++;
        }
    }
    cout << cnt;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
