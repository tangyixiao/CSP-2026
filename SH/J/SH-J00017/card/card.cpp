//#include <cstdio>
//int n, m;
//int a[500010];
//int last_pos[300010];
//int cnt[300010];
//int main()
//{
//    freopen("card.in", "r", stdin);
// // freopen("card.ans", "w", stdout); // for checker
//    freopen("card.out", "w", stdout);
//    scanf("%d %d", &n, &m);
//    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
//    for(int i = 1; i <= n; i++) last_pos[a[i]] = i;
//    for(int i = 1; i <= n; i++)
//    {
//        int pos = i;
//        while(pos <= n)
//        {
//            cnt[a[pos]]++;
//            pos = last_pos[a[pos]] + 1;
//        }
//    }
//    for(int i = 1; i <= m; i++) printf("%d ", cnt[i]);
//    return 0;
//}
// BF Ver Finish at 10:50(O(n*?))
// Solution Idea: Find the first, then jump to its back + 1, and so on
#include <algorithm>
#include <cstdio>
int n, m;
int a[500010];
int last_pos[300010];
int n_upd[300010];
int cnt[300010];
int order[300010];
bool cmp(int x, int y)
{
    return last_pos[x] < last_pos[y];
}
void update(int x)
{
    cnt[x] += n_upd[x];
    n_upd[a[last_pos[x] + 1]] += n_upd[x];
    n_upd[x] = 0;
}
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++) last_pos[a[i]] = i;
    for(int i = 1; i <= n; i++) n_upd[a[i]]++;
    for(int i = 1; i <= m; i++) order[i] = i;
    std::sort(order + 1, order + m + 1, cmp);
    for(int i = 1; i <= m; i++) update(order[i]);
    for(int i = 1; i <= m; i++) printf("%d ", cnt[i]);
    return 0;
}
// Finish at 11:14
// I'm an ***, I think for a thing like lazy tag for 20 minutes!
// And the notepad seems to be crashed, the ans file opened as a error characters set
// Additional space is OK, right?
