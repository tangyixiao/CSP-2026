#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;
int get_id(char c)
{
    if (c == 'A') return 0;
    if (c == 'B') return 1;
    if (c == 'C') return 2;
    if (c == 'D') return 0;
    if (c == 'F') return 1;
    return -1;
}
bool is_left(char c)
{
    return c == 'A' || c == 'B' || c == 'C';
}
int main()
{
	freopen("travel.in" ,"r", stdin);
	freopen("travel.out","w", stdout);
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    int ans1 = (c1 == c2) ? 1 : 0;
    string row1 = s1.substr(0, 2);
    string row2 = s2.substr(0, 2);
    int ans2 = (ans1 && row1 == row2) ? 1 : 0;
    char ch1 = s1[2];
    char ch2 = s2[2];
    bool side1 = is_left(ch1);
    bool side2 = is_left(ch2);
    int ans3 = (ans2 && (side1 == side2)) ? 1 : 0;
    int id1 = get_id(ch1);
    int id2 = get_id(ch2);
    int ans4 = (ans3 && abs(id1 - id2) == 1) ? 1 : 0;
    cout << ans1 << ans2 << ans3 << ans4 << endl;
    return 0;
}



