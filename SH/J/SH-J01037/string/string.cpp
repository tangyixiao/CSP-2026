#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("string.in", "read", stdin);
    freopen("string.out", "write", stdout);
    int n;
    cin >> n;
    char str[n+1];
    long long str_len[n+1];
    for(int i=0; i<n; i++){
        cin >> str_len[i] >> str[i];
    }
    char over_char = '\0';
    long long over_num = 0;
    int over_pos = 0; // FRONT 1, BACK -1
    long long now_front = 0;
    long long now_back = n-1;
    long long ans = 0;
    while(true){
        if(now_front > now_back)break;
        if (over_num){
            if(over_pos = 1){
                if (over_char == str[now_back]){
                    long long minus = over_num - str_len[now_back];
                    if (minus > 0){
                        over_num = minus;
                    }else if (minus < 0){
                        over_num = -minus;
                        over_char = str[now_back];
                        over_pos = -1;
                    }else{
                        over_num = 0;
                        over_char = '\0';
                        over_pos = 0;
                    }
                    now_back--;
                }else{
                    long long minus = over_num - str_len[now_back];
                    if (minus > 0){
                        over_num = minus;
                        ans+=str_len[now_back];
                    }else if (minus < 0){
                        ans+=over_num;
                        over_num = -minus;
                        over_char = str[now_back];
                        over_pos = -1;
                    }else{
                        ans+=over_num;
                        over_num = 0;
                        over_char = '\0';
                        over_pos = 0;
                    }
                    now_back--;
                }
            }else if(over_pos = -1){
                if (over_char == str[now_front]){
                    long long minus = over_num - str_len[now_front];
                    if (minus > 0){
                        over_num = minus;
                    }else if (minus < 0){
                        over_num = -minus;
                        over_char = str[now_front];
                        over_pos = 1;
                    }else{
                        over_num = 0;
                        over_char = '\0';
                        over_pos = 0;
                    }
                    now_front++;
                }else{
                    long long minus = over_num - str_len[now_front];
                    if (minus > 0){
                        over_num = minus;
                        ans+=str_len[now_front];
                    }else if (minus < 0){
                        ans+=over_num;
                        over_num = -minus;
                        over_char = str[now_front];
                        over_pos = 1;
                    }else{
                        ans+=over_num;
                        over_num = 0;
                        over_char = '\0';
                        over_pos = 0;
                    }
                    now_front++;
                }
            }
        }else{
            over_num = str_len[now_front];
            over_char = str[now_front];
            over_pos = 1;
            now_front++;
        }
    }
    cout << ans;
    return 0;
}
