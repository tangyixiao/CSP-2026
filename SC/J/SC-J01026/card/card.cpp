#include <cstdio>

const int N = 5e5 + 5, M = 3e5 + 10;
int a[N], lst[M], ans[M];

void read(int &a) {
	a = 0;
	char c = getchar();
	while (c < '0' || c > '9') c = getchar();
	while (c >= '0' && c <= '9') a = (a << 3) + (a << 1) + (c ^ 48), c = getchar();
}

int main() {
	
	/*
		求上洛谷代码鉴赏榜
		ccf noi froepen "R" card1.in card.ans
		这些关键字够了吧
	*/
	
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    int n, m;
    read(n), read(m);

    bool flag = true;
    for (int i = 1; i <= n; i ++) {
    	read(a[i]);
        lst[a[i]] = i;
        if (i >= 2 && a[i] > a[i - 1]) flag = false;
    }

    if (flag) {
        for (int i = 1; i <= m; i ++) printf("%d ", lst[i]);
        printf("\n");
        return 0;
    }

    for (int i = 1; i <= n; i ++) {
        int pos = i;
        while (pos < n) {
            pos = lst[a[pos]];
            ans[a[pos]] ++;
            pos ++;
        }
    }
    ans[a[n]] = n;

    for (int i = 1; i <= m; i ++) printf("%d ", ans[i]);
    printf("\n");


    return 0;
}

/*
大家好我叫曾帅鸣 来自乐山嘉祥 (但是是在本部读书)

10:30 finish 
都很简单 最后一题题目困扰了我一小会，不过问题不大 
倒数第三题写了个拍子，其他题都测过样例时间和内存了，应该是 AK了

说到上次 csp-j 我在赛场上做了前三道，然后就开始睡，心想这不一等我直接跳了，结果发现T3挂了点分，刚好没一等
今年不能大意了。。。

csp-s 2025也是非常悲伤，T1挂成50，但是大样例全过了，并且是正解算法，但是50就是50。只能错失1=
csp-s 2024发现 T1 re 0 ? no no no 当时不会用linux，也是错失1=
csp-s 2023 T1 密码锁，是个暴力，当时觉得自己很强推了个式子，是 O(1) 的。的确有人这么过了，但是不是我。又只能 T1 WA 0  

今年都高一了 可惜了
*/