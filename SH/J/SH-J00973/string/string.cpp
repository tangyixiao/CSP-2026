#include <bits/stdc++.h>
using namespace std;
int main(){
	//freeopen feropen fopen
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	struct kuai1
	{
		int a;
		char b;
	};
	int n;
	unsigned long long ans=0;
	struct kuai1 kuai[200005];
	cin >> n;
	for(int i = 1;i <= n;i ++)
	{
		cin >> kuai[i].a;
		cin >> kuai[i].b;
	}
	int left=1,right=n,temp;
	while(left != right)
	{
		bool cmp = false;
		if(kuai[left].b!=kuai[right].b)
		{
			cmp = true;
		}
		if(kuai[left].a>kuai[right].a)
		{
			kuai[left].a-=kuai[right].a;
			temp = kuai[right].a;
			right--;
		}
		else if(kuai[left].a==kuai[right].a)
		{
			temp = kuai[right].a;
			right--;
			left ++;
		}
		else
		{
			kuai[right].a-=kuai[left].a;
			temp = kuai[left].a;
			left++;
		}
		if(cmp == true)
		{
			ans += temp;
		}
	}
	cout << ans;
	return 0;
	//rp++
	//give me more pts 
}
