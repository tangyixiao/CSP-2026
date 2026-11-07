#include<bits/stdc++.h>
using namespace std;
int number[200005];
char c[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int number2;
    cin>>number2;
    long long length=0;
    for(int i=0;i<number2;i++){
        cin>>number[i]>>c[i];
        length+=number[i];
    }
    vector<char> a;
    for(int i=0;i<number2;i++){
        for(int o=0;o<number[i];o++){
                a.push_back(c[i]);
        }
    }
    long long ans1=0;
   for(long long i=0;i<length;i++){
    if(a[i]!=a[length-1-i]) ans1++;
   }
    return 0;

}
