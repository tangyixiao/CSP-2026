#include <bits/stdc++.h>
using namespace std;
long long n,x,y1,y2,y3,sum;
char s;
long long p[300000],z[300000];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
    {
    cin>>x>>s;
    p[i]=x;z[i]=(int)s;
    }
    y1=1;
    y2=n;
    while(y1<y2)
    {
        if(z[y1]!=z[y2])
        {
        if(p[y1]>p[y2])
        {
        sum+=p[y1]-p[y2];
        y2--;}
        else if(p[y1]<p[y2]){
        sum+=p[y2]-p[y1];
        y1++;}else{
        sum+=p[y1];
        y2--;
        y1++;}
        }
        else
        {
        if(p[y1]>p[y2])
        y2--;
        else if(p[y1]<p[y2]){
        y1++;}else{
        y2--;
        y1++;}
    }}
    cout<<sum;
}
