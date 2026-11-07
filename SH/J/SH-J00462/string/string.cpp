#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    long long a;
    cin>>a;
    long long nums[100067];
    char ltrs[100067];
    int numsall=0;
    for(int i=0;i<a;i++){
        cin>>nums[i]>>ltrs[i];
        numsall+=nums[i];
    }
    int left=0,right=a-1;
    int all=0;
    for(long long i=0;i<numsall/2;i++,nums[left]--,nums[right]--){
        if(ltrs[right]==ltrs[left]){
            continue;
        }
        if(ltrs[left]!=ltrs[right]){
            all++;
        }
        if(nums[left]<=0){
            left++;
        }
        if(nums[right]<=0){
        }
            right++;
    }
    cout<<all;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
