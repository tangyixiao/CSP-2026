#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,sum=0;
long long j=0;
string s;
cin>>n;
    for(int i=0;i<n;i++){
        int a;
        string c;
        cin>>a>>c;
        for(j<a;j++){
            s[j]=c;
        }
    }
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]!=s[len-i+1]){
            sum++;
        }
    }
    cout<<sum;
    fclose(stdin);
    fclose(stdout);
    return 0
}
