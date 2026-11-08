#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    
    
    bool sameCar = (c1 == c2);
    
   
    bool sameRow = sameCar && (s1.substr(0, 2) == s2.substr(0, 2));
    
    
    bool sameSide = false;
    if (sameRow) {
        char s1,s2;
        bool aLeft = (s1 == 'A' || s1 == 'B' || s1 == 'C');
        bool bLeft = (s2 == 'A' || s2 == 'B' || s2 == 'C');
        sameSide = (aLeft == bLeft);
    }
    
  
    bool adjacent = false;
    if (sameSide) {
        string leftSeq = "ABC", rightSeq = "DF";
        char s1,s2;
        int posA = -1, posB = -1;
        if (s1== 'A' || s1 == 'B' || s1 == 'C') {
            posA = leftSeq.find(s1);
            posB = leftSeq.find(s2);
        } else {
            posA = rightSeq.find(s1);
            posB = rightSeq.find(s2);
        }
        adjacent = (abs(posA - posB) == 1);
    }
    
    cout << (sameCar ? '1' : '0')
         << (sameRow ? '1' : '0')
         << (sameSide ? '1' : '0')
         << (adjacent ? '1' : '0') << endl;
    
    return 0;
}

