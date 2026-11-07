#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    // 去那我下午干啥
    vector<int> ton;
    vector<char> toh;
    int n, len = 0;
    cin >> n;
    for(int i = 0; i < n; i ++){
        int num;
        char le;
        cin >> num >> le;
        len += num;
        if(i == 0){
            ton.push_back(num);
            toh.push_back(le);
            continue;
        }
        ton.push_back(ton.back() + num);
        toh.push_back(le);
    }
    int maybe = 0;
    long long need = 0;
    for(int i = 0; i < len / 2; i ++){
        int pos = len - 1 - i;
        char cur;
        if(i <= ton[maybe]){
            cur = toh[maybe];
        }else{
            maybe ++;
            cur = toh[maybe];
        }
        int j;
        for(j = ton.size() - 1; j >= 0; j --){
            if((len - 1 - i) <= ton[j]){
                break;
            }
        }
        if(cur != toh[j]){
            need ++;
        }
    }
    cout << need << endl;   
    return 0;
}
