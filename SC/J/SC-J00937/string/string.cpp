#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin >> n;
    int total;
    cin >> total;
    for(int i =1;i <= n; i++)
    {
        for(int j =1; j <= i; j++)
        {
            total++;
        }
    }
    cout << total;
    return 0;
}