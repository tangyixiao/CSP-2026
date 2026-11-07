#include<iostream>
using namespace std;
struct k{
    int a;
    char c;
}s[200002];
int n;
long long ans=0;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i].a>>s[i].c;
    }
    int i=0,j=n-1;
    while(i<j){
        if(s[i].c==s[j].c){
            if(s[i].a<s[j].a){
                s[j].a-=s[i].a;
                ++i;
            }else if(s[i].a>s[j].a){
                s[i].a-=s[j].a;
                --j;
            }else{
                ++i;
                --j;
            }
        }else{
            if(s[i].a<s[j].a){
                ans+=s[i].a;
                s[j].a-=s[i].a;
                ++i;
            }else if(s[i].a>s[j].a){
                ans+=s[j].a;
                s[i].a-=s[j].a;
                --j;
            }else{
                ans+=s[i].a;
                ++i;
                --j;
            }
        }
    }
    cout<<ans;
    return 0;
}
