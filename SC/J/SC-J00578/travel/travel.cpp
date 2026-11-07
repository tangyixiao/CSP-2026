#include <iostream>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
    string c1, s1, c2, s2;
    bool a, b, c;
    cin >> c1 >> s1 >> c2 >> s2;
    cout << (c1 == c2);
    a = (c1 == c2);
    cout << (a && s1[1] == s2[1]);
    b = (s1[1] == s2[1]);
    cout << (a && b && (s1[2] < 'D' && s2[2] < 'D' || s1[2] >= 'D' && s2[2] >= 'D'));
    c = (s1[2] < 'D' && s2[2] < 'D' || s1[2] >= 'D' && s2[2] >= 'D');
    cout << (a && b && c && (s1[2] - 1 == s2[2] || s1[1] - 1 == s2[1] || s1[2] == 'D' && s2[2] == 'F' || s2[2] == 'D' && s1[2] == 'F'));
	return 0;
} 