#include<iostream>
#include<string>
using namespace std;
int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    string a1, a2, b1, b2;
    char a3, b3;
    bool ans1, ans2, ans3, ans4;
    cin>>a1>>a2>>b1>>b2;
    a3=a2.back(), b3=b2.back();
    a2=a2.substr(0, 2), b2=b2.substr(0, 2);
    ans1 = (a1==b1);
    ans2 = (ans1&&a2==b2);
    if (a3>b3)
        swap(a3, b3);
    ans3 = (ans2&&((a3=='D'&&b3=='F')||(a3!='F'&&a3!='D'&&b3!='F'&&b3!='D')));

    ans4 = (ans3&&((a3=='D'&&b3=='F')||!(a3=='A'&&b3=='C')));
    cout<<ans1<<ans2<<ans3<<ans4;
    return 0;
}
