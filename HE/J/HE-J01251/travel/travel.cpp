#include <bits/stdc++.h>
using namespace std;

const int MAX_LEN=10;

char c1[MAX_LEN+10];
char s1[MAX_LEN+10];
char c2[MAX_LEN+10];
char s2[MAX_LEN+10];

int main(){

    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    scanf("%s%s%s%s", c1+1, s1+1, c2+1, s2+1);
    if(c1[1]==c2[1] && c1[2]==c2[2]){
        printf("1");
        if(s1[1]==s2[1] && s1[2]==s2[2]){
            printf("1");
            if('A'<=s1[3] && s1[3]<='C'){
                if('A'<=s2[3] && s2[3]<='C'){
                    printf("1");
                    if(s1[3]=='A' && s2[3]=='B'){
                        printf("1");
                    }else if(s1[3]=='B' && s2[3]=='A'){
                        printf("1");
                    }else if(s1[3]=='B' && s2[3]=='C'){
                        printf("1");
                    }else if(s1[3]=='C' && s2[3]=='B'){
                        printf("1");
                    }else{
                        printf("0");
                    }
                }else{
                    printf("00");
                }
            }else{
                if(s2[3]=='D' || s2[3]=='F'){
                    printf("11");
                }else{
                    printf("00");
                }
            }
        }else{
            printf("000");
        }
    }else{
        printf("0000");
    }
    printf("\n");

    return 0;

}
