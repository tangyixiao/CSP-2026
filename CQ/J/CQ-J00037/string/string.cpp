#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >>n)) return 0;
    vector<long long>a(n);
    vector<char>c(n);
    //int k; 
    for(int t=0;k<n;++k){
        cin>>a[k]>>c[k];
    }
    int i=0;
    int j=n-1;
    long long count_i=a[i];
    long long count_j = a[j];
    long long ans = 0;
    while (i<j) {
        long long match=min(count_i,count_j);
        if (c[i] != c[j]){
            ans += match;
        }
        
        count_i -= match;
        count_j -= match;
        if (count_i == 0){
            i++;
            if(i<n)count_i=a[i];
        }
        if (count_j == 0){
            j--;
            if(j<=0)count_j=a[j];
        }
    }
    cout<<ans;
    return 0;
    
}
