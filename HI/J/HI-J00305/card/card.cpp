#include <iostream>
using namespace std;
int main()
{ 
	freopen("card.in", "r", stdin);
	freopen("card.out","w", stdout);
    int n, m, a[n+5];
    cin >> n >> m;
    for(int i =0;i<n;i++){
    	cin >> a[i];
	}
	cout << m << " " << "1" << " "<< n;
	return 0;
}
