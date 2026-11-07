/*
rp++
机房电脑是win11（震惊） 
初一小蒟蒻试图AKcsp-j OvO 
8:50 T1 过大样例 算法：模拟 
9:35 T2 过大样例 算法：双指针 
10:18 T3过大样例 算法：贪心 
10:29 吃了一块巧克力
10:58 吃了一块巧克力 
11:31 T4发现自己解法有误QAQ，放弃正解，开始打暴力（梦想破碎/yun） 算法：暴力（bushi） 
11:43暴力打完，挣扎着试图想出正解
11:45虚拟机过编译 
csp-j和万圣节联动（\yun）
*/
#include<bits/stdc++.h>
using namespace std;

int c1, c2, r1, r2;
char l1, l2;
bool flag1, flag2, flag3, flag4;
char s1[20], s2[20];

bool check(char a, char b) {
	if (a > b)
		swap(a, b);
	if ((a == 'A' && b == 'B') || (a == 'A' && b == 'C') || (a == 'B' && b == 'C') || (a == 'D' || b == 'F'))
		return true;
	return false;
} 

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%d%s%d%s", &c1, s1 + 1, &c2, s2 + 1);
	r1 = s1[1] * 10 + s1[2];
	r2 = s2[1] * 10 + s2[2];
	l1 = s1[3];
	l2 = s2[3];
	flag1 = (bool)(c1 == c2);
	flag2 = (bool)(flag1 && (bool)(r1 == r2));
	flag3 = (bool)(flag2 && check(l1, l2));
	flag4 = (bool)(flag3 && (bool)(abs(l1 - l2) == 1));
	printf("%d%d%d%d", flag1, flag2, flag3, flag4);
	return 0;
}
/*
             //\\    ///////
            // \\   //
           //  \\  //
          //   \\  \\
         //----\\   \\
        //     \\    \\
       //      \\     \\\\\\\\
*/
