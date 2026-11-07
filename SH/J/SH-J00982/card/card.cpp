#include <bits/stdc++.h>
using namespace std;
//大模拟

int main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    vector<int> ans(m + 1, 0);//每轮结束之后计算剩下的哪些牌，加进去
    queue <int> cards;        //cards
    for (int i = 0; i < n; ++i){
        int cd;
        cin >> cd;
        cards.push(cd);
    }

    for (int i = 0; i < n; ++i){            //rounds

        queue<int> q = cards;               //the number of cards that will be used in this round
        for (int j = 0; j < i; ++j){
            q.pop();
        }
        vector<int> now = {};                    //what cards are on the table now
        vector<int> used(m + 2, -1);            // whether the type of cards is used( store the index of the last one
        while (!q.empty()){
            int x = q.front();
            q.pop();
            if (used[x] != -1){//already used
                int sz = now.size();
                for (int nnn = sz - 1; nnn > used[x]; --nnn){
                        //clear all the cards after the card
                        now.pop_back();
                }
                for (int k = sz - 1; k > used[x]; --k){
                    used[now[k]] = -1;
                }
            }
            else if (used[x] == -1){//unused
                now.push_back(x);
                used[x] = now.size() - 1;
            }
        }
        //after the round ends store all cards that're left
        for (int k = 1; k < m + 1; ++k){
            if (used[k] != -1){
                used[k] = -1;        //usage of the cards should be cleared
                ans[k]++;           //store that it's left
            }
        }
    }

    for (int i = 1; i <= m; ++i){
        cout << ans[i] << " ";
    }
    return 0;
}
