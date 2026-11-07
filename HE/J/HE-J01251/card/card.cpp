#include <bits/stdc++.h>
using namespace std;

const int MAX_N=5e5;
const int MAX_M=3e5;

int n, m;
int a[MAX_N+10];
int lst[MAX_M+10];
int ans[MAX_M+10];
int nums[MAX_N+10];

int main(){

    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=1; i<=n; i++){
        memset(lst, -1, sizeof(lst));
        int len=0;
        for(int j=i; j<=n; j++){
            if(lst[a[j]]==-1 || lst[a[j]]>len || nums[lst[a[j]]]!=a[j]){
                len++;
                lst[a[j]]=len;
                nums[len]=a[j];
            }else{
                len=lst[a[j]];
            }
        }
        for(int j=1; j<=len; j++){
            ans[nums[j]]++;
        }
    }
    for(int i=1; i<=m; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;

}
/*
#include <bits/stdc++.h>
using namespace std;

const int MAX_N=5e5;
const int MAX_M=3e5;

int n, m;
int a[MAX_N+10];
int ans[MAX_M+10];
int cnt[MAX_M+10];
bool b[MAX_M+10];

int main(){

    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    for(int i=n; i>=1; i--){
        if(b[a[i]])    continue;
        b[a[i]]=true;
        for(int i=1; i<=m; i++){
            cnt[i]++;
        }

    }
    for(int i=1; i<=m; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;

}
*/
