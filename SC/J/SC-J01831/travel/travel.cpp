#include <iostream>
#include <string>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int a1, a2;
    string b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    bool x, y, z, m;
    x = y = z = m = 0;
    if(a1 == a2){
        x = 1;
        if(b1[0] == b2[0] && b1[1] == b2[1]){
            y = 1;
            if((b1[2] <= 'C' && b2[2] <= 'C') || (b1[2] >= 'D' && b2[2] >= 'D')){
                z = 1;
                if(b1[2]+1 == b2[2] || b2[2]+1 == b1[2])
                    m = 1;
            }
        }
    }
    cout << x << y << z << m;
    return 0;
}

