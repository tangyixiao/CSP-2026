#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
struct str{
    int first;
    char second;
};
stack<str> sl,sr;
int a[200005];
char c[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    int n=1;
    scanf("%d",&n);
    long long int cnt=0;
    for(int i=1; i<=n; ++i){
        scanf("%d %c",&a[i],&c[i]);
        cnt+=1LL*a[i];
    }

    long long int mid=0;
    int i=1;

    while(mid<=cnt/2){
        sl.push({a[i],c[i]});
        mid+=a[i];
        ++i;
    }
    //printf("%d\n",mid);

    for(int j=n; j>=i; --j){
        sr.push({a[j],c[j]});
    }
    if(mid>cnt/2){
        sl.top().first-=(mid-cnt/2);
        sr.push({a[i-1]-sl.top().first,c[i-1]});
    }

//    while(!sl.empty()){
//        printf("%d %c\n",sl.top().first,sl.top().second);
//        sl.pop();
//    }
//    printf("\n");
//    while(!sr.empty()){
//        printf("%d %c\n",sr.top().first,sr.top().second);
//        sr.pop();
//    }

    long long int ans=0;
    while(!sl.empty() && !sr.empty()){
        if(sl.top().first<=sr.top().first){
            if(sl.top().second!=sr.top().second){
                ans+=1LL*sl.top().first;
            }
            sr.top().first-=sl.top().first;
            sl.pop();
        }
        else{
            if(sl.top().second!=sr.top().second){
                ans+=1LL*sr.top().first;
            }
            sl.top().first-=sr.top().first;
            sr.pop();
        }
    }
    printf("%lld",ans);

    return 0;
}
