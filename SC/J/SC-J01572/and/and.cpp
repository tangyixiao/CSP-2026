#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
int a[N];
int n, m;
bool check(int x){
    int num = 0;
    for(int i = 1; i <= n; i++){
        if((a[i] & x) == x) num++;
    }
    return num >= m;
}
int main(){
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int l = 0, r = (1 << 30) - 1;
    while(l < r){
        ll mid = (l + r + 1) >> 1;
        if(check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    fclose(stdin);
    fclose(stdout);
    return 0;
}