#include<bits/stdc++.h>
using namespace std;
struct seats{
    int c, s_h;//车厢（02-15,17），座位行（01-18）
    char s_l;//座位列（ABC DF）
};
seats m,n;

int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    int a,b;//数字输入
    string k,l;
    cin >> a >> k >> b >> l;
    m.c = a;
    m.s_h = 10 * ((int)k[0]-48) + ((int)k[1]-48);
    m.s_l = k[2];
    n.c = b;
    n.s_h = 10 * ((int)l[0]-48) + ((int)l[1]-48);
    n.s_l = l[2];
    //m,n输入
    //cout << m.c << " " << m.s_h << " " << m.s_l << " " << n.c << " " << n.s_h << " " << n.s_l << "\n";
    //cout << k[0] << " " << (int)k[0];

    //02 02B 02 01A
    //测试：
    //m.c = 02;
    //m.s_h = 02;
    //m.s_l = 'B';
    //n.c = 02;
    //n.s_h = 01;
    //n.s_l = 'A';

    if(m.c == n.c){
        printf("%d", 1);//mn同一车厢
        if(m.s_h==n.s_h){
            printf("%d", 1);//mn同一行
            //mn同一侧
            if(m.s_l == 'A' || m.s_l == 'B' || m.s_l == 'C'){
                if(n.s_l == 'A' || n.s_l == 'B' || n.s_l == 'C'){
                    printf("%d", 1);//mn左侧
                    if(m.s_l == 'B' || n.s_l == 'B'){
                        printf("%d", 1);//mn左侧且相邻
                    }else{
                        printf("%d", 0);
                    }
                }else{
                    printf("%s", "00");
                }
            }else{
                if(n.s_l == 'D' || n.s_l == 'F'){
                    printf("%s", "11");//mn右侧必相邻
                }else{
                    printf("%s", "00");
                }
            }
        }else{
            printf("%s","000");
        }
    }else{
        printf("%s", "0000");
    }
    return 0;
}
