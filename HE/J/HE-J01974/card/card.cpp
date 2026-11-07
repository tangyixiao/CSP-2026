
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll ans;
int cards[5000005];
int have_num[3000005];
vector<int>table;
queue<int>hand;
int main(){


    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);


    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>cards[i];

    }

    for(int i=1;i<=n;i++){//ith game
        //cards: cards[i]-cards[n]
        table.clear();
        for(int j=i;j<=n;j++){
            hand.push(cards[j]);
        }

        for(int j=i;j<=n;j++){
            int curcard=hand.front();
            hand.pop();
            auto fd=find(table.begin(),table.end(),curcard);
            if(fd!=table.end()){
                table.resize(fd-table.begin());
            }

            table.push_back(curcard);


        }

                    for(auto& it:table){
                have_num[it]++;
            }


    }
    for(int i=1;i<=m;i++){
        cout<<have_num[i]<<" ";
    }
    cout<<"\n";

    fclose(stdin);
    fclose(stdout);
    return 0;
}
