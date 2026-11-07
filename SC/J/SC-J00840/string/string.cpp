#include <bits/stdc++.h>
using namespace std;

bool check(string str){
    string nxt=str;
    reverse(nxt.begin(),nxt.end());
    return str==nxt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    int n;
    cin>>n;

    if(n==1){
        cout<<0;
        return 0;
    }

    string str="";
    for(int i=0;i<n;i++){
        int num;
        char c;
        cin>>num>>c;

        for(int j=0;j<num;j++){
            str+=c;
        }
    }

    if(check(str)){
        cout<<0;
        return 0;
    }

    int cnt=0;
    int left=0,right=str.size()-1;
    while(left<=right){
        if(str[left]!=str[right]){
            cnt++;
        }
        left++;
        right--;
    }

    cout<<cnt;

    return 0;
}
