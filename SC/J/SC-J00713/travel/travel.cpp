#include<cstdio>
#include<cmath>
using namespace std;
int c1, s1, c2, s2;
char ch1, ch2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d %d%c %d %d%c", &c1, &s1, &ch1, &c2, &s2, &ch2);
	bool ans1 = c1 == c2;
	bool ans2 = ans1 && s1 == s2;
	bool ans3 = ans2 && ((ch1 >= 'D' && ch2 >= 'D' )||(ch1 <= 'C' && ch2 <= 'C'));
	bool ans4 = ans3 && (abs(ch1 - ch2) == 1);
	printf("%d%d%d%d", ans1, ans2, ans3, ans4);
}