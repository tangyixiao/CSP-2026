#include <iostream>

using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
    string c_1, s_1, c_2, s_2;

    cin >> c_1 >> s_1 >> c_2 >> s_2;

    bool q_1 = (c_1 == c_2); 

    int row1 = int(s_1[0] - '0') * 10 + (s_1[1] - '0');
    int row2 = int(s_2[0] - '0') * 10 + (s_2[1] - '0');
    bool q_2 = q_1 && (row1 == row2);

    int p_1 = int(s_1[2] - 'A'), p_2 = int(s_2[2] - 'A');
    bool q_3 = q_2 && ((p_1 <= 2 && p_2 <= 2) || (p_1 >= 3 && p_2 >= 3));

    bool q_4 = q_3 && (abs(p_1 - p_2) == 1);

    cout << int(q_1) << int(q_2) << int(q_3) << int(q_4);
    
    return 0; 
}
