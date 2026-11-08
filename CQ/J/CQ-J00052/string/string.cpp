#include<iostream>
using namespace std;
int n;
struct node {
    int a;
    char c;
}cf[200004];
string s;
int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %c", &cf[i].a, &cf[i].c);
        for (int j = 1; j <= cf[i].a; j++) {
            s += cf[i].c;
        }
    }
    long long ans = 0;
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1]) {
            ans++;
        }
    }
    printf("%lld", ans);
    return 0;
}
