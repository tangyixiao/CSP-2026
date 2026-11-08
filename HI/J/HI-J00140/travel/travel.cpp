#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

static int c1, c2;
static string s1, s2;
static int rLine, xLine;
static char rCol, xCol;
static bool isSameRoom;
static bool isSameLine;
static bool isSameCol;
static bool isNearBy;
static bool rIs1stSeat;
static bool xIs1stSeat;

int main(void)
{
	char *pRCol, *pXCol;
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	rLine = (int)strtol(s1.c_str(), &pRCol, 10);
	xLine = (int)strtol(s2.c_str(), &pXCol, 10);
	rCol = *pRCol;
	xCol = *pXCol;
	rIs1stSeat = (c1 == 1 || c1 == 16);
	xIs1stSeat = (c2 == 1 || c2 == 16);
	if ((c1 < 1 || c1 > 17 || c2 < 1 || c2 > 17) || (rCol < 'A' || rCol == 'E' || rCol > 'F' || xCol < 'A' || xCol == 'E' || xCol > 'F') || 
		(rLine < 1 || rLine > 18 || xLine < 1 || xLine > 18) || (rIs1stSeat && rCol == 'B') || (xIs1stSeat && xCol == 'B') || (c1 == c2 && rLine == xLine && rCol == xCol))
		return 1;
	isSameRoom = (c1 == c2);
	isSameLine = (isSameRoom && rLine == xLine);
	isSameCol = (isSameLine && ((rCol >= 'A' && rCol <= 'C' && xCol >= 'A' && xCol <= 'C') || (rCol >= 'D' && rCol <= 'F' && xCol >= 'D' && xCol <= 'F')));
	isNearBy = (isSameCol && (abs(xCol - rCol) <= 1 || (max(rCol, xCol) == 'F' && min(rCol, xCol) == 'D') || (rIs1stSeat && xIs1stSeat && max(rCol, xCol) == 'C' && min(rCol, xCol) == 'A')));
	cout << (int)isSameRoom << (int)isSameLine << (int)isSameCol << (int)isNearBy << endl;
	return 0;
}
