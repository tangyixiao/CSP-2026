#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool ans1 = 0,ans2 = 0,ans3 = 0,ans4 = 0,rce = 0,xce = 0;
string lst = "ABCGDF"; // G代表过道，作为占位符使用 
long long pos1,pos2;
long long find_c(string lst,char c)
{
	for (long long i = 0;i < lst.length();i++)
	{
		if (lst[i] == c) return i;
	}
	return -1;
}
long long ll_abs(long long n)
{
	if (n < 0) return -n;
	else return n;
}
int main()
{
	// 快读 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	// 主代码 
	cin>>c1>>s1>>c2>>s2;
	if (c1 == c2) ans1 = 1; // 两人是否位于相同的车厢 
	if (ans1 && s1.substr(0,2) == s2.substr(0,2)) ans2 = 1; // 在1的条件下，两人是否位于同一排 
	rce = ((s1[2] == 'D' || s1[2] == 'F') ? 1 : 0);
	xce = ((s2[2] == 'D' || s2[2] == 'F') ? 1 : 0);
	if (ans1 && ans2 && rce == xce) ans3 = 1; // 在2的条件下，两人是否在过道的同一侧 
	pos1 = find_c(lst,s1[2]);
	pos2 = find_c(lst,s2[2]);
	if (ans1 && ans2 && ans3 && ll_abs(pos1 - pos2) == 1) ans4 = 1; // 两人是否相邻 
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}
// 我觉得满分势在必得 
