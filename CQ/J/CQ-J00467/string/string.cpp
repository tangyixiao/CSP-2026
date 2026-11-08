#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int >
#define pll pair<long long ,long long >

using namespace std;
const int N=200005;
int arr[N];
char ch[N];
int n;
ll ans=0;
void sol(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        cin>>ch[i];
    }
    int ptr1=1;
    int ptr2=n;
    
    while(ptr1<ptr2){
        if(arr[ptr1]<arr[ptr2]){
            if(ch[ptr1]!=ch[ptr2]){
                ans+=arr[ptr1];
            }
            arr[ptr2]-=arr[ptr1];
            ++ptr1;
        }
        else if(arr[ptr1]>arr[ptr2]){
            if(ch[ptr1]!=ch[ptr2]){
                ans+=arr[ptr2];
            }
            arr[ptr1]-=arr[ptr2];
            --ptr2;
        }
        else{
            if(ch[ptr1]!=ch[ptr2]){
                ans+=arr[ptr2];
            }
            ++ptr1;
            --ptr2;
        }
    }
    cout<<ans;

}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    
    int t=1,c;
    //cin>>t;
    //cin>>c;
    while(t--){
        sol();
    }
    //cerr<<'\n'<<clock()<<'\n';
    return 0;
}
/*
author:_aa_

*/