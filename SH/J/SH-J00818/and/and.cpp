#include <iostream>
#include <algorithm>
using namespace std;

int numbers[1000007];

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout); 
	int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
    	cin >> numbers[i];
	}
	sort(numbers, numbers + n);
	int i = n - 1;
	int ans = numbers[i];
	for(int j = 1; j < m; ++j)
	{
//		cerr << numbers[--i] << "\t" << ans << "\n";
		ans &= numbers[--i];
	}
    cout << ans;
} 
