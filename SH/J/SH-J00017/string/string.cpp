#include <cstdio>
#define min(a, b) (((a) < (b)) ? (a) : (b))
int n;
int a[200010];
char c[200010];
long long s[200010];
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d %s", &a[i], c + i);
    for(int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];
    int l = 1, r = n;
    long long sum = 0;
    long long last_pos = 0;
    while(l < r)
    {
//        printf("%d %d\n", l, r);
        long long num = min(s[l], s[n] - s[r - 1]) - last_pos;
        sum += num * (c[l] != c[r]);
        last_pos = min(s[l], s[n] - s[r - 1]);
        if(s[l] < s[n] - s[r - 1]) l++;
        else r--;
    }
    printf("%lld", sum);
    return 0;
}
// Finish at 9:25
// A little annoying, but it's OK, I hope this code will be correct
// 11:42->I don't think it is very right, but I will keep it. 
