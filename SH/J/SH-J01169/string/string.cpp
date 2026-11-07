#include<bits/stdc++.h>
using namespace std;
int n, p_l, p_r;
struct parts{
    long long num;
    char c;
};
long long l = 0, ans = 0, l_pos, r_pos, mid, delta;
parts p[20005];


int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out","w", stdout);
    scanf("%d\n",&n);
    for (int i = 1; i <= n; i++){
        scanf("%d %c\n", &p[i].num, &p[i].c);
        l += p[i].num;
    }
    l_pos = 1;
    r_pos = l;
    p_l = 1; 
    p_r = n;
    mid = (1+l)/2;
    bool add;
    //printf("%lld,%lld", l,mid);
    while(r_pos>=mid+1){
        if(p[p_l].c == p[p_r].c){
            add = 0;
        }else{
            add = 1;
        }
        if(p[p_l].num > p[p_r].num){
            if(add){
                ans = ans + p[p_r].num;
            }
            delta = p[p_l].num - p[p_r].num;
            r_pos = r_pos - p[p_r].num;
            p_r--;
            l_pos = l_pos + p[p_r].num;
            p[p_l].num = p[p_l].num - delta;
            
        }else if(p[p_r].num > p[p_l].num){
            if(add){
                ans = ans + p[p_l].num;
            }
            delta = p[p_r].num - p[p_l].num;
            l_pos = l_pos + p[p_l].num;
            p_l++;
            r_pos = r_pos - p[p_l].num;
            p[p_r].num = p[p_r].num - delta;
        }else{
            if(add){
                ans = ans + p[p_l].num;
            }
            l_pos = l_pos + p[p_l].num;
            r_pos = r_pos - p[p_r].num;
            p_l++;
            p_r--;
        }
    }
    //if (r_pos<mid&&add){
      //  ans = ans +mid -r_pos;
    //}
    printf("%lld",ans);
    return 0;
}