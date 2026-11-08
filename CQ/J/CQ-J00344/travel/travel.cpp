/* 考完仔细检查，不要在考场上睡觉。 */
#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("travel.in","r",stdin);
        freopen("travel.out","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>c1>>s1>>c2>>s2;
    bool res1=c1==c2;
    bool res2=res1&&s1.substr(0,2)==s2.substr(0,2);
    bool res3=res2&&(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D');
    bool res4=res3&&(s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='B'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D');
    cout<<res1<<res2<<res3<<res4;
    return 0;
}
/*
我常常追忆过去。
生命瞬间定格在我的脑海。我将背后的时间裁剪、折叠、蜷曲、揉捻成天上的朵朵白云。
云朵之间亦有分别：积云厚重而卷云缥缈。人生中最震撼的场景一经过我的脑海便一生无法忘怀，而那些普通平凡的在时间的冲刷下只留下些许残骸。追忆宛如如梦，太过清晰则无法愉悦我的幻想，过分模糊却又坠入虚无。唯有那薄雾间的山水、面纱下的女子，那恰到好处的朦胧，才能满足我对美的苛求。
不会背了，看看能不能上 CQ 迷惑行为大赏。
哦是不是还要写个这个
#define froepen freopen
#define freopon freopen
#define freepon freopen
*/