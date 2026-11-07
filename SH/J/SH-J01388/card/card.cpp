#include <iostream>
const int MAXN = 2e5 + 100;
const int MAXM = 3e5 + 100;

using namespace std;

struct list{
    int value = 0, next = 0;
};

list array[MAXN] = {}, tmp[MAXN] = {};
int ans[MAXM] = {};
int last_app[MAXM] = {};  // store p

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	 
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &tmp[i].value);
        tmp[i].next = i + 1;
    }
    tmp[n - 1].next = 0;


    for (int k = 1; k <= n; k++) {
    	int p = 1;
    	while (p != 0) {
        	array[p].value = tmp[p].value, array[p].next = tmp[p].next;
        	p = array[p].next;
    	}
        p = k;
        while (p != 0) {
            // modify the list
            if (last_app[array[p].value] != 0) {
                array[last_app[array[p].value]].next = p;
            }
            p = array[p].next;
        }
        p = k;
        while (p != 0) {
            ans[p]++;
            p = array[p].next;
        }
    }

    for (int i = 1; i <= m; i++) {
        cout << ans[i] << ' ';
    }

    return 0;
}
