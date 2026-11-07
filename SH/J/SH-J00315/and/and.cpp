#include <iostream>
#include <algorithm>
using namespace std;
int n,m,ans;
long long twice(int number)
{
	long long reply = 0;
	for (int i = 30;i >= 0;i--){
		if (number >= 2**i)
			reply = reply * 10 + 1;
		else
		 	reply *= 10;
	}
	return reply;
}

int once(long long reply)
{
	int number,i = 0;
	while (reply > 0) {
		number += (2**i) * (reply % 10);
		i++;
		reply /= 10;
	}
	return number;
}

int andd(long long reply_1,long long reply_2){ //2>1
	long long reply;
	int i = 0;
	while (reply_1 > 0) {
		if (reply_1 % 10 == reply_2 % 10)
			reply += 10**i;
		reply_1 /= 10;
		reply_2 /= 10;
		i++;
	}
	return once(reply);
}

int main()
{
	n.freopen("and","r",in);
	m.freopen("and","r",in);
	int a[n+3];
	for (int i = 1;i <= n;i++)
		a[i].freopen("and".in,"r");
	sort(a+1,a + n + 1);
	for ()
	ans.freopen("and","w",out);
	return 0;
}