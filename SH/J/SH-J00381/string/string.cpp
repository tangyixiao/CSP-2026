#include<iostream>
#include<string>
const int MAX_SIZE=200064;
long long n, a[MAX_SIZE], ans=0;
char c[MAX_SIZE];
using namespace std;
int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>c[i];
    }
    for(int l=0, r=n-1;l<r;){
        if (c[l]!=c[r]){
            ans+=min(a[l], a[r]);
        }
        if (a[l]==a[r]){
            l++, r--;
        }
        else if (a[l]<a[r]){
            a[r]-=a[l++];
        }
        else {
            a[l]-=a[r--];
        }
    }
    cout<<ans;
    return 0;
}
