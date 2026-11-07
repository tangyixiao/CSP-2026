#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[500010], flag[300010], ans[300010];
bool is_delete[500010];
stack<int> st;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int _ = 1; _ <= n; _++) {
		while (!st.empty())
			st.pop();
		memset(flag, 0, sizeof(flag));
		for (int i = _; i <= n; i++) {
			if (flag[a[i]])
				while (!st.empty()) {
					int j = st.top();
					st.pop();
					flag[a[j]]--;
					if (a[i] == a[j])
						break;
				}
			flag[a[i]]++;
			st.push(i);
		}
		for (int j = 1; j <= m; j++)
			if (flag[j])
				ans[j]++;
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", ans[i]);
	return 0;
}
/*
             //\\    /////////
            // \\   //
           //  \\  //
          //   \\  \\           ²»ÁË 
         //----\\   \\
        //     \\    \\
       //      \\     \\\\\\\\
       
*/
