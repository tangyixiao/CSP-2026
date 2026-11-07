#include <iostream>
using namespace std;

struct node{
    long long a;
    char b;
}s[20000005];
long long n, mid, now = 0;
long double ans = 0, l = 0;
char c[20000005];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> s[i].a;
        cin >> s[i].b;
        if(s[i].b == ' ')  cin >> s[i].b;
        l += s[i].a;
        for(long long j = 0; j < s[i].a; j++)
            c[j+now] = s[i].b;
        now += s[i].a;
    }
    cout << 1;
    mid = l / 2;
    for(long long i = 0; i < mid; i++)
        if(c[i] != c[mid+i])
            ans++;
    cout << ans;
    return 0;
}
