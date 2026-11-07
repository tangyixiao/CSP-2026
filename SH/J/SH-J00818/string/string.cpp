#include <iostream>
using namespace std;

int numbers[1000007];
char chars[1000007];
int n, l;

char get(int i)
{
	int j = 0;
	while(numbers[j] <= i)
	{
		++j;
	}
	return chars[numbers[j - 1]];
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout); 
    int cnt = 0;	
	cin >> n;
	cin >> numbers[0] >> chars[0];
	for(int i = 1; i < n; i++)
	{
		cin >> numbers[i] >> chars[i];
		numbers[i] += numbers[i-1];
//		cout << numbers[i] << chars[i] << "\t";
	}
	l = numbers[n - 1];
	for(int i = 0; i * 2 < n; i++)
	{
		char a = get(i), b = get(l - i + 1);
//		cout << a << "\t" << b << "\n";
		if(a != b)
		{
			cnt++;
		}
	}
	cout << cnt;
}
