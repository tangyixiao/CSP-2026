#include <iostream>
using namespace std;
long long box1[30],box2[30],longth;
string s = " ";
struct node
{
    int x;
    char c;
}str[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,len=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int x;
        char c;
        cin >> x >> c;
        len += x;
        for(int j=1;j<=x;j++)
        {
            s += c;
        }
    }
    int ans = 0;
    for(int i=1;i<=len/2;i++)
    {
        if(s[i] != s[len-i+1]) ans ++;
    }
    cout << ans;
    /*for(int i=1;i<=n;i++)
    {
        int a;
        char b;
        cin >> a >> b;
        str[i].x = a;
        str[i].c = b;
        longth += a;
    }
    long long sum = 0;
    bool flag = true;
    for(int i=1;i<=n;i++)
    {
        int num = str[i].x;
        char cur = str[i].c;
        sum += num;
        if(sum > longth / 2&& flag)
        {
            flag = false;
            if(longth % 2 == 0)
            {
                box1[cur-96] += num - (sum - longth/2);
                box2[cur-96] += sum - longth/2;
            }
            else
            {
                box1[cur-96] += num - (sum - longth/2);
                box2[cur-96] += sum - longth/2 - 1;
            }
            continue;
        }
        if(flag)
        {
            box1[cur-96] += num;

        }
        else box2[cur-96] += num;


    }
    long long ans = 0;
    for(int i=1;i<=26;i++)
    {
        ans += abs(box1[i] - box2[i]);
    }
    cout << ans / 2;*/
    return 0;
}
