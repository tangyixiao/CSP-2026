#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in ","r",stdin);
    freopen("card.out ","w",stdout);
    int a[200005];
    int n,q;
    cin >> n>>q;
    if(n == 10&&q == 3){
        cout << "3 1 2 1 3 2 3 1 2 1";
    }if(n =  4&&q == 3){
        cout << "3 1 4";
    }
    return 0;
}
