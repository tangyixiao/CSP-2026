#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    //input data
    scanf("%d",&n);

    vector<int> a(n);
    //vector<long long> x(n);
    vector<char> c(n);

    long long s_size=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&a[i],&c[i]);
        s_size+=a[i];
        //x[i]=s_size;
    }

    //solve
    long long l=0;
    long long r=s_size;
    long long l_a=0;
    long long r_a=n;
    long long l_rest=a[l_a];
    long long r_rest=a[r_a];
    long long march=0;
    long long ans=0;
    while(l<r)
    {
        //solve rest (sub change)
        if(l_rest==0)
        {
            l_a++;
            l_rest=a[l_a];
        }
        if(r_rest==0)
        {
            r_a--;
            r_rest=a[r_a];
        }

        //solve rest one sub (exception case)
        if(l_a==r_a)
        {
            l_rest=l_rest+r_rest-a[l_a];
            r_rest=l_rest;
        }

        //solve march
        march=min(l_rest,r_rest);
        //if();

        //march
        if(c[l_a]!=c[r_a]) ans+=march;
        l+=march;
        r-=march;

        //solve rest (same sub)
        l_rest-=march;
        r_rest-=march;


    }

    printf("%lld",ans);
    return 0;
}
