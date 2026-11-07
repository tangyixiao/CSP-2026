#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int cnt[N];
char le[N];
int z;
int jj;
int l;
char ch;
char lch;
bool b=1;
long long ans=0;
int main(){
    int n;
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
       
        cin>>l;
        
        cin>>ch;
        if(ch==lch){
            jj+=1;
            cnt[i-jj]+=l;
            
        }
        else{
        le[i]=ch;
        cnt[i-jj]=l;
        z++;
       }
        lch=ch; 
    }
    
    for(int i=0;i<z;i++){
        if(le[i]!=le[z-1-i]||cnt[i]!=cnt[z-1-i]){b=0;
        ans+=max(cnt[i],cnt[z-1-i]);
        if(max(cnt[i],cnt[z-1-i])==cnt[i]){
            cnt[z-2-i]-=cnt[i]-cnt[z-1-i];
        }
        else cnt[i+1]-=cnt[z-1-i]-cnt[i];
        }
    }
    cout<<ans;
    return 0;
}