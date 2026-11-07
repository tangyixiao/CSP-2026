#include<iostream>
using namespace std;
int a[100005];
string s;
string b[100005];

int main()
{
     freopen("string.in","r",stdin);
    freopen("string.out","l",stdout);
    int n;
    cin >> n;
    int cnt1=0;
    for(int i=1;i <=n;i++)
    {
        cin >> a[i];
        cin >> b[i];
        cnt1+=a[i];
        for(int j=1;j <=a[i];j++)
        {
            s+=b[i];

        }
    }
    long long cnt=0;

    for(int i=1;i<=cnt1/2;i++)
    {
        if(s[i]!=s[n-i])
        {

            cnt++;
        }





    }
    cout << cnt;

}
