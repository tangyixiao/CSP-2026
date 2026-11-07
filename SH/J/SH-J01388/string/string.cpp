#include <iostream>
using namespace std;

const int MAXN = 2e5 + 100;

long long dis[MAXN] = {};
long long pos[MAXN] = {};
char id[MAXN] = {};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
    long long n = 0, len = 0;
    scanf("%d", &n);
    // printf("%d", n); 

    for (int i = 1; i <= n; i++) {
        scanf("%d %c", &(dis[i]), &(id[i]));
        len += dis[i];
    }

    long long left = 0, right = 0;
    if (len%2 == 0) {
        left = len / 2, right = left + 1;
    } else {
        left = (len - 1) / 2, right = left + 2;
    }
 	// cout << "here " << left << ' ' << right << '\n';
 	
    long long lpart_0 = 0, rpart_0 = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (cnt < left && cnt + dis[i] >= left){
            lpart_0 = i;
        }
		if (cnt < right && cnt + dis[i] >= right) {
            rpart_0 = i;
        }
        cnt += dis[i];
        pos[i] = cnt;
    }
	// cout << "here " << lpart_0 << ' ' << rpart_0 << '\n';
	
	
    char cur_left = 0, cur_right = 0;
    long long bl_left = lpart_0, bl_right = rpart_0;
    long long ans = 0;

    long long shift = 0;
    while (left >= 1) {
        cur_left = id[bl_left], cur_right = id[bl_right];
        long long lneed = left - pos[bl_left - 1];
        long long rneed = pos[bl_right] - right + 1;
        // do it by blocks
        shift = min(lneed, rneed);
        // cout << lneed << ' ' << rneed << '\n'; break;
        if (cur_left != cur_right) {
            ans += shift;
            // cout << shift;
            // cout << ans << '\n';
        }
        // refresh iterators
        left -= shift, right += shift;
        if (lneed > rneed) {
            bl_right++;
        } else if (lneed < rneed) {
            bl_left--;
        } else {
            bl_left--, bl_right++;
        }
    }

    cout << ans;
    
    return 0;
}
