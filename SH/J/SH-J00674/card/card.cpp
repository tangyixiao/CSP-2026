#include<iostream>
#include<vector>
using namespace std;

int cards[int(5e5)+5];
int res[int(3e5)+5];

signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> cards[i];
    }
    for(int i = 1; i <= n; i++){
        /*
        cout << " GAME " << i << endl;
        */
        vector<int> desk(int(5e5)+5);
        int lstidx = 1;
        vector<int> firstpos(int(3e5)+5);
        for(int j = i; j <= n; j++){
            if(firstpos[cards[j]] == 0 or firstpos[cards[j]] > lstidx){
                /*
                cout << " coming card " << cards[j] << " firstpos[cards[j]] = " << firstpos[cards[j]] << " desk[" << lstidx <<" modfied";
                */
               desk[lstidx] = cards[j];
                firstpos[cards[j]] = lstidx + 1;
                lstidx++;
                /*
                for(int i = 1; i <= lstidx - 1; i++){
                    cout << desk[i] << " ";
                }cout << endl;
                */
                
            }
            else{
                lstidx = firstpos[cards[j]];
                /*
                cout << " coming card " << cards[j] << " " << " existed ,lstidx = " << lstidx <<" modfied";
                for(int i = 1; i <= lstidx - 1; i++){
                    cout << desk[i] << " ";
                }cout << endl;
*/
            }
            
        }

        for(int i = 1; i <= lstidx - 1; i++){
            res[desk[i]]++;
        }
    }
    for(int i = 1; i <= m; i++){
        cout << res[i] << " ";
    }
    return 0;
}