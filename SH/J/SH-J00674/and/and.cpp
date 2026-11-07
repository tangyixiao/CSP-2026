#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
#define int long long

vector<int> nums;
vector<int> bitscnt[101]; // lowest bit index:0
bool sorted[101];

bool cmp(int& a, int& b){
    return a > b;
}

signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int highestbit = 0;
    int n, m; cin >> n >> m;
    nums.reserve(n+5);
    for(int i = 1; i <= n; i++){
        int inp; cin >> inp;
        int src = inp;
        nums.push_back(src);
        for(int j = 0; inp > 0; j++){
            if(inp & 1) {
                bitscnt[j].push_back(src);
                highestbit = j;
            }
            inp = (inp >> 1);
        }
    }
    /*
    for(int i = 0; i <= highestbit; i++){
        cout << "bit " << i << " , counts = " << bitscnt[i].size() << endl;
        for(auto x: bitscnt[i]) cout << x << " ";
        cout << endl;
    }
    */

    int res = 0, leftms = m - 1;
    for(int i = 100; i >= 0; i--){
        if(leftms <= 0) break;
        if(bitscnt[i].size() > 0){
            if(leftms <= 0) break;
            sort(bitscnt[i].begin(),bitscnt[i].end(),cmp);
            sorted[i] = true;
            res = bitscnt[i][0];
            for(auto x: bitscnt[i]) {
                int tgt = res & x;
                if(tgt > res){
                    leftms--;
                    res = tgt;
                }
                if(leftms <= 0) break;
            }
            
            for(int j = 1;j <= i; j++){
                if(leftms <= 0) break;
                sort(bitscnt[i-j].begin(),bitscnt[i-j].end(),cmp);
                sorted[i-j] = true;
                //cout << "trying bitset[ " << i - j << " ] , res = " << res << " leftms = " << leftms << endl;
                
                for(auto y: bitscnt[i-j]) {
                    int tgt = res & y;
                    if(tgt > res){
                        leftms--;
                        res = tgt;
                    }
                    if(leftms <= 0) break;
                }
                if(leftms <= 0) break;
            }
            
            break;
        }
    }

    // or the digits to get a minium and and with res
    int res2 = 0;
    /*
    for(int i = 0 ; i<= 100; i++){
        if(leftms <= 0) break;
        if(bitscnt[i].size() == 0)continue;
        if(sorted[i] == false) sort(bitscnt[i].begin(),bitscnt[i].end(),cmp);
        cout << "trying bitset[ " << i << " ] , res = " << res << " leftms = " << leftms << endl;
        for(int j = bitscnt[i].size() - 1; j >= 0; j--){
            res2 = res2 | bitscnt[i][j];
            leftms--;
            if(leftms <= 0) break;
        }
        if(leftms <= 0) break;
    }
    */
    sort(nums.begin(),nums.end());
    res2 = nums[0];
    for(auto x:nums){
        res2 = res2 | x;
        leftms--;
        if(leftms <= 0) break;
    }
    //cout << res << " " << res2 <<endl;
    cout << (res ^ res2) << endl;

    return 0;
}