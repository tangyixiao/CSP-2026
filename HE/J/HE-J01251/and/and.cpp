#include <bits/stdc++.h>
using namespace std;

const int MAX_N=2e5;

int n, m;
int a[MAX_N+10];
int k;

int get_number(int x, int pos){

    return (x>>pos)&1;

}

bool cmp(int a, int b){

    return get_number(a, k)>get_number(b, k);

}

int main(){

    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    int tot=n;
    for(int i=30; i>=0; i--){
        k=i;
        sort(a+1, a+tot+1, cmp);
        int good=0;
        for(int j=1; j<=tot; j++){
            if(get_number(a[j], k)==1)  good=j;
            else    break;
        }
        if(good>=m){
            tot=good;
        }
       // printf("%d\n", tot);
    }
    int ans=a[1];
    for(int i=1; i<=m; i++){
        ans=ans&a[i];
    }
    printf("%d\n", ans);

    return 0;

}
