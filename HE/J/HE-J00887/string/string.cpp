#include <bits/stdc++.h>
using namespace std;
int n;
long long cnt[200005],ans;
struct zm
{
    long long num;
    char word;
};
zm s[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].num>>s[i].word;
        cnt[n]=cnt[n-1]+s[i].num;
    }
    int i=1,j=n;
    zm a=s[1],b=s[n];
    while(i<=j)
    {
        if(a.num>b.num)
        {
            if(a.word!=b.word)
                ans+=b.num;
            a.num=a.num-b.num;
            j--;
            b=s[j];
        }
        else if(a.num<b.num)
        {
            if(a.word!=b.word)
                ans+=a.num;
            b.num=b.num-a.num;
            i++;
            a=s[i];
        }
        else
        {
            if(a.word!=b.word)
                ans+=a.num;
            i++;j--;
            a=s[i];b=s[j];
        }
    }
    //ans+=a.num+b.num;
    cout<<ans;
    return 0;
}
