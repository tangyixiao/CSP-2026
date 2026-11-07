#include<iostream>
#include<string>
using namespace std;
int main()
{
    //freopen("string.in","r",stdin);
   // freopen("string.out","w",stdout);
    string s;
    int cnt = 0;
    int n,k;
    cin >> n;char c;
    for(int i = 1;i <= n;i++)
    {
        cin >> k;
        cin >> c;
        for(int j = 1;j <= k;j++)
        {
            s[cnt]=c;
            cnt++;
        }
    }
    int left=0,right=n-1;cnt=0;
    while(left<right)
    {
        if(s[left]!=s[right])cnt++;
        left++; right--;
    }
    cout << cnt;
    return 0;
}
