#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long a[500005], b[300005] = {}, playing[500005];
int main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int j = 0; j < n; j++){
        int s = j;
        for (int k = 0; k < j; k++){
            playing[k] = 0;
        }
        for (int k = j; k < n; k++){
            playing[k] = a[s];
            s++;
        }
        for (int l = j; l < n; l++){
            int ans = l - 1;
            while (ans >= 0){
                if (playing[ans] == playing[l]){
                    for (int o = ans; o < l; o++){
                        playing[o] = 0;
                    }
                }
                ans--;
            }
        }
        for(int num = 0; num < n; num++){
            b[playing[num]]++;
        }
    }
    for (int i = 1; i <= m; i++){
        cout << b[i] << " ";
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
