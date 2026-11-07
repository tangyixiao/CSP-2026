#include <bits/stdc++.h>
using namespace std;
const int N = 500010;
int a[N];
stack<int> st;
int n;
map<int, int> mp;
map<int, bool> is_in;
void does(int id)
{
    // cout << "id = " << id << endl;
    while (!st.empty()) st.pop();
    is_in.clear();
    for (int i = id; i <= n; ++ i )
    {
        // cout << "is_in[" << a[i] << "] = " << is_in[a[i]] << endl;
        if (is_in[a[i]])
        {
            while (st.top() != a[i] && !st.empty()) 
            {
                // cout << "top() = " << st.top() << endl;
                is_in[st.top()] = false;
                st.pop();
            }
        }
        else
        {
            st.push(a[i]);
            is_in[a[i]] = true;
        }
    }
    while (!st.empty())
    {
        int xx = st.top();
        // cout << "xx = " << xx << endl;
        st.pop();
        mp[xx] ++ ;
    }
}
int m;
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d%d", &n, &m);
    // cout << "f" << endl;
    for (int i = 1; i <= n; ++ i )
    {
        scanf("%d", &a[i]);
    }
    // cout << "f" << endl;
    for (int i = 1; i <= n; ++ i )
    {
        // cout << "f" << i << endl;
        does(i);
    }
    for (int i = 1; i <= m; ++ i )
    {
        printf("%d ", mp[i]);
    }
    puts("");
    return 0;
}
