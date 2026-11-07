#include <bits/stdc++.h>
using namespace std;
int id1, id2;
string s1, s2;
int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> id1 >> s1 >> id2 >> s2;
    int p1 = (s1[0]-'0')*10+s1[1]-'0';
    int p2 = (s2[0]-'0')*10+s2[1]-'0';
    bool flag1 = id1==id2;
    bool flag2 = flag1&&p1==p2;
    bool flag3 = flag2&&(s1[2]<='C')==(s2[2]<='C');
    bool flag4 = flag3&&!((s1[2]=='A'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='A'));
    cout << flag1 << flag2 << flag3 << flag4 << '\n'; 
    return 0;
}
/*
# CCF CSP-J 2026 Solution

Also output something lieqi here. Let's see how MoCaRabbit becomes 3=. He is just speaking P-hua.

## T1 travel

Just a lieqi problem. Do it yourself.

## T2 string

~~This is the problem that I solve it with the longest code. How gay I am!~~

First, merge the segments which have the same character. Then, use two-pointers to scan the array, and try to match the segments with the same length. If the characters are not the same, it turns out that it needs to be changed.

## T3 and

A binary search answer template problem.

Noticed that if $x$ can be the answer, there are more than $m$ numbers in $a$ that satisfied `(y&x)==x`. Test from highbit to lowbit, if this bit filled with $1$ is OK, just fill it with $1$, or fill it with $0$.

## T4 card

Something intersting.

Noticed that the first card always survives, then it will break down the cards between it and the last card which has the same color with it. Then it becomes a subquestion.

Obviously, the answer of a subquestion is $m$ numbers and it takes lots of time to copy the answer. Then, we just add edges, turn it into a tree. The color of $i$ contributes to the answer just of the size of the subtree of node $i$ times. Make an DFS to calculate it, or just make an DP.
*/