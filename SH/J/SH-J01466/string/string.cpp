#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5+10;

struct Node{
    int num;
    char value;
};

int n;
Node elements[N];
string str;
int total_len;
map<char, int> mp;

signed main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> elements[i].num >> elements[i].value;
        for(int j=1; j<=elements[i].num; j++){
            str += elements[i].value;
        }
        mp[elements[i].value] += elements[i].num;
    }
    
    total_len = str.size();
    str = '?' + str;

    int range;
    if(total_len%2 == 0){
        range = total_len/2;
    } else{
        range = total_len/2+1;
    }
    for(int i=1; i<=range; i++){
        if(str[i] == str[total_len+1-i]){
            if(i != range || (i == range && range%2 == 0)) mp[str[i]] -= 2;
            else{
                mp[str[i]] -= 1;
            }
        }
    }

    int sum = 0;
    int maxn = -1e9;
    for(auto key : mp){
        sum += key.second;
        maxn = max(key.second, maxn);
    }
    int ans = sum-maxn;
    cout << ans << endl;
    

    fclose(stdin);
    fclose(stdout);
    return 0;
}