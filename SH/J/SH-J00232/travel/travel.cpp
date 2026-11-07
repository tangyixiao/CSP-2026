#include<bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int main(){ 
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1[0] == c2[0] && c1[1] == c2[1]){
        printf("1");
        if(s1[0] == s2[0] && s1[1] == s2[1]){
            printf("1");
            int k1 = int(s1[2] - 'A') + 1;
            int k2 = int(s2[2] - 'A') + 1;
            if(k1 > k2) swap(k1, k2);
            if((1 <= k1 && k1 <= 3 && 1 <= k2 && k2 <= 3) || (4 <= k1 && k1 <= 5 && 3 <= k2 && k2 <= 5)){
                printf("1");
                if(k1 + 1 == k2 && k1 != 3) printf("1\n");
                else printf("0\n");
            }else printf("00\n");
        }else printf("000\n");
    }else printf("0000\n");
    return 0;
}
