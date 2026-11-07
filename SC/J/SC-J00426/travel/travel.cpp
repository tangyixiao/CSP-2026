#include<bits/stdc++.h>
using namespace std;
#define db(x...) fprintf(stderr,x)
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(0),cin.tie(0);
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int ans[4]={0,0,0,0};
    int bl[5]={0,0,0,1,1};
    if(s1==s3){
        ans[0]=1;
        if(s2[0]==s4[0]&&s2[1]==s4[1]){
            ans[1]=1;
            if(bl[s2[2]-'A']==bl[s4[2]-'A']){
                ans[2]=1;
                if((s2[2]=='A'&&s4[2]=='C')||(s2[2]=='C'&&s4[2]=='A')) ans[3]=0;
                else ans[3]=1;
            }
        }
    }
    printf("%d%d%d%d\n",ans[0],ans[1],ans[2],ans[3]);
    fclose(stdin);
    fclose(stdout);
    return 0;
}