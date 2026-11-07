#include<bits/stdc++.h>
using namespace std;
string a, b, c, d;
int x, y;
int calc(char z)
{
	if(z == 'F')
		return 5;
	else
		return z - 'A' + 1;
}
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> a >> b >> c >> d;
	if(a != c)
		cout << "0000";
	else
	{
		cout << 1;
		if(b[0] == d[0] && b[1] == d[1])
		{
			cout << 1;
			int x = calc(b[2]), y = calc(d[2]);
			if((x <= 3 && y <= 3) || (x >= 4 && y >= 4))
			{
				cout << 1;
				if(abs(x - y) == 1)
					cout << 1;
				else
					cout << "0";
			}
			else
				cout << "00";
		}
		else
			cout << "000";
	}
}
/*
恰逢重阳，是孝亲敬老的时节。每至此刻，我常会念起那位长辈。为此，我总要哭祭一番。
她是我的阿太，外公的母亲。
童年总是无忧无虑的，我们常常在她住的那间小屋前玩耍。每每此时，她便会佝偻着身子，笑眯眯看着我们。对于她来说，能看着我们这帮晚辈快活地玩耍，已是天伦之乐。
我和表兄弟们最喜欢往她那里跑，学她走路。在重阳前后，大家总能尝到重阳糕。听长辈说，这手艺是从阿太那儿传下来的。因此，我们总让阿太先尝。
到上海来上学后，能回乡下的次数减少了，与阿太见面的次数也少了。直到有一次，阿太不见了。
那时的我，还挺懵懂，并没有十分在意，只是在心中留下了一个小窟窿。
在之后的一个重阳，我又一次
*/
