#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int ans1, ans2, ans3, ans4;
int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1>> c2 >> s2;
    int m=s1.size();
    if(c1!=c2){
        ans1=0;
        ans2=0;
        ans3=0;
        ans4=0;
    }else{
        ans1=1;
        if(s1[0]==s2[0]&&s1[1]==s2[1]){//同一排
            ans2=1;
            if(s1[m-1]<='C'&&s2[m-1]<='C'||s1[m-1]>='D'&&s2[m-1]>='D') ans3=1;//同一侧
            else ans3=0;
            if(s1[m-1]+1==s2[m-1]||s1[m-1]-1==s2[m-1]){//是否相邻
                if(s1[m-1]<='C'&&s2[m-1]>='C') ans4=0;
                else ans4=1;
            }
            else ans4=0;
        }
        else{
            ans2=0;
            ans3=0;
            ans4=0;
        }
    }
    cout << ans1 << ans2 << ans3 << ans4;
    return 0;
}
