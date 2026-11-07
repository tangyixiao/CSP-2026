#include <iostream>
using namespace std;
freopen("string.in", "r");
freopen("string.out", "w");
int main()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        int num;
        string ch;
        cin >> num >> ch;
        for (int j = 1; j <= num; j++)
        {
            s = s + ch;
        }
    }
    int cnt = 0;
    if (s.size() % 2 == 0)
    {
        for (int i = s.size() / 2 - 1, j = s.size(); i >= 0, j <= s.size() - 1; i--, j++)
        {
            if (s[i] != s[j]) cnt++;
        }
    } 
    else
    {
        for (int i = s.size() / 2 - 1, j = s.size() / 2 + 1; i >= 0, j <= s.size() - 1; i--, j++)
        {
            if (s[i] != s[j]) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}