#include<bits/stdc++.h>
using namespace std;
int n;
struct{
    int a;
    char c;
}s[200001];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&s[i].a);
        char x;
        while(true){
            scanf("%c",&x);
            if(x>='a'&&x<='z'){
                s[i].c=x;
                break;
            }
        }
    }
    long long ans = 0;
    int u=1;
    int v = n;
    while(true){
        if(s[v].c!=s[u].c){
            ans+=min(1LL*s[v].a,1LL*s[u].a);
        }
        if(s[u].a>s[v].a)
            s[u].a-=s[v].a,v--;
        else
            s[v].a-=s[u].a,u++;
        if(u==v)
            break;
    }
    printf("%lld",ans);
    return 0;
}
