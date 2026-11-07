#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1, s1, c2, s2;
bool chk1(){
    return c1 == c2;
}
bool chk2(){
    char a = s1[0], b = s1[1];
    char c = s2[0], d = s2[1];
    return a == c && b == d;
}
bool chk3(){
    char a = s1[2], b = s2[2];
    if(a > b) swap(a, b);
    if(b <= 'C') return 1;
    if(a >= 'D') return 1;
    return 0;
}
bool chk4(){
    char a = s1[2], b = s2[2];
    if(a > b) swap(a, b);
    if(b - a == 1 && !(a == 'C' && b == 'D')) return 1;
    return 0;
}
int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    printf("%d%d%d%d\n", chk1(), chk1()&&chk2(), chk1()&&chk2()&&chk3(), chk1()&&chk2()&&chk3()&&chk4());
    fclose(stdin);
    fclose(stdout);
    return 0;
}