#include<iostream>
#include<string>
using namespace std;

int n;
long long cnt[200005],stg_length=0,ans=0;
char s[200005];

char getl(int index){
    for(int i=1;i<=n;i++){
        if(index>cnt[i]){
            index-=cnt[i];
            continue;
        }
        return s[i];
    }
}

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>cnt[i]>>s[i];
    }
    for(int i=1;i<=n;i++){
        stg_length+=cnt[i];
    }
    if(stg_length%2==1){
        long long l=stg_length/2,r=stg_length-((stg_length/2)+1),l_len=0,r_len=0,lsi,rsi;
        for(int i=1;i<=n;i++){
            lsi=i;l_len=l;
            if(l>cnt[i]){
                l-=cnt[i];
                l_len=l;
            }else{
                break;
            }
        }
        for(int i=n;i>=lsi;i--){
            rsi=i;r_len=r;
            if(r>cnt[i]){
                r-=cnt[i];
                r_len=r;
            }else{
                break;
            }
        }
        while(lsi>0&&rsi<=n){
            if(r_len==0){
                rsi++;
                r_len=cnt[rsi];
            }
            if(l_len==0){
                lsi--;
                l_len=cnt[lsi];
            }
            if(s[lsi]!=s[rsi]){
                ans++;
            }
            l_len--;r_len--;
            l--;
            r++;
        }
    }else{
        long long l=stg_length/2,r=stg_length-((stg_length/2)+1),l_len=0,r_len=0,lsi,rsi;
        for(int i=1;i<=n;i++){
            lsi=i;l_len=l;
            if(l>cnt[i]){
                l-=cnt[i];
                l_len=l;
            }else{
                break;
            }
        }
        for(int i=n;i>=lsi;i--){
            rsi=i;r_len=r;
            if(r>cnt[i]){
                r-=cnt[i];
                r_len=r;
            }else{
                break;
            }
        }
        for(int i=n;i>lsi;i--){
            if(r>cnt[i]){
                r-=cnt[i];
                continue;
            }
            rsi=i;r_len=r;
        }
        while(lsi>0&&rsi<=n){
            if(r_len==0){
                rsi++;
                r_len=cnt[rsi];
            }
            if(l_len==0){
                lsi--;
                l_len=cnt[lsi];
            }
            if(s[lsi]!=s[rsi]){
                ans++;
            }
            l_len--;r_len--;
            l--;
            r++;
        }
    }
    cout<<ans;
    return 0;
}
