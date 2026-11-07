#include <bits/stdc++.h>
;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    std::cin >> n;
    std::string string_result = "";
    for(int i = 1;i <= n;i++)
    {
        int a;
        std::cin >> a;
        char c;
        std::cin >> c;
        for(int i = 1;i <= a;i++) string_result += c;
    }
    int i = 0,j = string_result.size() - 1;
    int cnt = 0;
    while(i < j)
    {
        if(string_result[i] != string_result[j]) cnt++;
        i++, j--;
    }
    std::cout << cnt;
    return 0;
}
