#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b, c, d;
	char bx, dx;
	scanf("%d%d%c%d%d%c", &a, &b, &bx, &c, &d, &dx);
	printf(a == c ? "1" : "0");
	printf(a == c && b == d ? "1" : "0");
	printf(a == c && b == d && ((bx == 'A' || bx == 'B' || bx == 'C') ^ (dx == 'D' || dx == 'F')) ? "1" : "0");
	printf(a == c && b == d && ((bx == 'A' || bx == 'B' || bx == 'C') ^ (dx == 'D' || dx == 'F')) && ((bx == 'A' && dx == 'B') || (bx == 'B' && dx == 'A') || (bx == 'B' && dx == 'C') || (bx == 'C' && dx == 'B') || (bx == 'D' && dx == 'F') || (bx == 'F' && dx == 'D')) ? "1" : "0");
	return 0;
}
/*
// 56 行，203 列
#include <chrono>
#include <thread>
#include <cstdio>
#include <string>
#include <random>
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <algorithm>
#include <sys/mman.h>

using namespace std;

mt19937_64 mt(random_device{}());

namespace generator
{
	unsigned pc = 0;
	uniform_int_distribution<int> ud(0, 4), ur(1, 4);
	unsigned gen()
	{
		if(pc == 0)
		{
			auto res = ud(mt);
			if(res == 0)
			{
				pc = ur(mt) - 1;
				return 0;
			}
			else return res;
		}
		else
		{
			pc--;
			return 0;
		}
	}
}
namespace drawer
{
	constexpr unsigned rows = 56, cols = 203;
	const char *shapes[5][5] = 
	{
		{"     ", "     ", "     ", "     ", "     "},
		{
			"  |  ",
			"  |  ",
			"\\ | /",
			" \\|/ ",
			"  V  "
		},
		{
			"  ^  ",
			" /|\\ ",
			"/ | \\",
			"  |  ",
			"  |  ",
		},
		{
			"  /  ",
			" /   ",
			"<----",
			" \\   ",
			"  \\  "
		},
		{
			"  \\  ",
			"   \\ ",
			"---->",
			"   / ",
			"  /  "
		}
	};
	string buf[rows];
	void init() { for(auto &x : buf) x.resize(cols, ' '); }
	void movedown()
	{
		for(int i=rows-1;i>=1;i--)
		{
			buf[i] = buf[i-1];
		}
		buf[0] = string(cols, ' ');
	}
	void output()
	{
		string whole;
		for(int i=0;i<rows;i++)
		{
			if(i != rows - 2) whole += buf[i];
			else whole += string(cols, '-');
		}
		// for(const auto &x : buf) whole += x;
		printf("\r%s", whole.c_str());
		fflush(stdout);
	}
	void paint(int id, int pos = 99)
	{
		for(int i=0;i<5;i++)
		{
			for(int j=pos;j<pos + 5;j++)
			{
				buf[i][j] = shapes[id][i][j-99];
			}
		}
	}
}
namespace inputer
{
	termios x, y;
	void uninit()
	{
		tcsetattr(0, TCSANOW, &y);
	}
	void init()
	{
		tcgetattr(0, &x);
		y = x;
		cfmakeraw(&x);
		tcsetattr(0, TCSANOW, &x);
		atexit(uninit);
	}
}

int main()
{
	constexpr unsigned long duration = 50;
	inputer::init();
	drawer::init();
	// drawer::paint(1);
	// drawer::output();
	// usleep(1000000);
	auto bgn = chrono::high_resolution_clock::now();
	int cnt = 0;
	while(true) { if(chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - bgn).count() < duration) { this_thread::yield(); continue; } bgn = chrono::high_resolution_clock::now(); if(cnt == 0) drawer::paint(generator::gen()); cnt = (cnt + 1) % 5; drawer::movedown(); drawer::output(); }
	// usleep(1000000);
	return 0;
}
*/