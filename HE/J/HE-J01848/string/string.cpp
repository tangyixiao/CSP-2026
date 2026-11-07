#include<bits/stdc++.h>
using namespace std;
int n;
string a;
int ans=0;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        int tmp;char tmpc;
        cin>>tmp>>tmpc;
        while(tmp>=1){
            a+=tmpc;
            tmp--;
        }
    }
    int al=a.size();
    int left=0,right=al-1;
    while(left<right){
        if(a[left]==a[right]){
            left++;right--;
        }
        else{
            a[left]=a[right];
            ans++;
            left++;right--;
        }
    }
    cout<<ans;
    return 0;
}//rp++!
//部分分也是分！ 
