#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt;
bool f=0;
struct node
{
    int a;
    char c;
}s[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    cin>>n;
    for(int i=1;i<=n;i++)cin>>s[i].a>>s[i].c;
    int i=1,j=n;
    while(i<=j)
    {

        if(s[i].c!=s[j].c)
        {
            if(s[i].a>s[j].a)
            {
                cnt+=s[j].a;
                s[i].a-=s[j].a;
                j--;
            }
            else if(s[i].a<s[j].a){
                cnt+=s[i].a;
                s[j].a-=s[i].a;
                i++;
            }
            else {
                cnt+=s[i].a;
                i++;
                j--;
            }
        }
        else
        {
            if(s[i].a>s[j].a)
            {
                s[i].a-=s[j].a;
                j--;
            }
            else if(s[i].a<s[j].a){
                s[j].a-=s[i].a;
                i++;
            }
            else {
                i++;
                j--;
            }
        }
    }
    cout<<cnt;
    return 0;
}
