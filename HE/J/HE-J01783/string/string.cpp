#include<bits/stdc++.h>
using namespace std;
string S;
long long n,cnt=0;
struct s{
    long long a;
    char c;
}str[200001];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str[i].a >> str[i].c;
        for(int j=0;j<str[i].a;j++){
            S+=str[i].c;
        }
    }
    for(int i=0;i<=S.size()/2;i++){
        if(S[i]!=S[S.size()-1-i]){
           S[S.size()-1-i]=S[i];
            cnt++;
        }
    }
    cout << cnt;
    return 0;
    fclose(stdout);
    fclose(stdin);
}
