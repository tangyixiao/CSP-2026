#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int a;
    cin >> a;
    string str = " ";
    for(int i=1;i<=a;i++)
    {
        int b;
        cin >> b;
        char ch;
        cin >> ch;
        for(int i=1;i<=b;i++)
        {
            str += ch;
        }
    }
    long long time = 0;
    for(long long i=1;i<=(str.size()-1)/2;i++)
    {
        if(str[i] != str[str.size()-i]) 
        {
            time++;
        }
    }
    cout << time;
    return 0;
}