#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
int n,m;
cin>>n>>m;
vector <long long> number;
for(int i=0;i<n;i++){
        int q;
    cin>>q;
number.push_back(q);
}

if(m==1){
        long long ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,number[i]);
    }
cout<<ans;
return 0;
}

vector<long long> an;
for(int i=0;i<m;i++){
    for(int o=i+1;o<n;o++){
            an.push_back(number[i]&number[o]);
    }
}
long long ans=0;
for(long long i=0;i<an.size();i++){
    ans= max(ans,an[i]);
}
cout<<ans;

return 0;
}
