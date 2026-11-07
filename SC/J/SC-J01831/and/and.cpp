#include <bits/stdc++.h>
using namespace std;

long long a[200005], ans;
stack<bool> anss[200005];
queue<bool> q;

void clam1(long long i){
    long long x = a[i];
    while(x != 0){
        anss[i].push(x % 2);
        x / 2;
    }
    for(long long j = 0; j < 2e30-anss[i].size(); j++){
        anss[i].push(0);
    }
}
long long clam2(){
    long long num = 0;
    for(long long i = 2e30-1; !q.empty(); i--){
        long long two;
        for(long long j = 0; j <= i; j++)
            two *= 2;
        num += q.front() * two;
        q.front();
    }
    return num;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    long long n, m;
    cin >> n >> m;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        clam1(i);
    }
    for(long long i = 0; i < n; i++){
        for(long long j = i+1; j < n; j++){
            while(!anss[i].empty() && !anss[j].empty()){
                q.push(anss[i].top() && anss[j].top());
                anss[i].pop();  anss[j].pop();
                ans = max(ans, clam2());
            }
        }
    }
    cout << ans;
    return 0;
}
