# include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;

int main (){
freopen("card.in", "r", stdin);
freopen("card.ans", "w", stdout);
cin >> c1 >> s1 >> c2 >>s2;
   if(c1 == c2){
    cout << 1;
        if((s1[0]+s1[1] == s2[0]+s2[1])){
        cout << 1;

        }
   }
   freclose("card.in", "r", stdin);
freclose("card.ans", "w", stdout);
return 0;
}
