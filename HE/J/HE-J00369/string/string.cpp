#include <iostream>

struct Segment
{
    char c;
    unsigned long long left;
};

int n, total, number;
char character;
Segment segments[200005];
unsigned long long i, ans;

char GetCharacter(unsigned long long index);

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
    std::cin >> n;
    for (i = 1; i <= n; i++)
    {
        std::cin >> number >> character;
        segments[i].c = character;
        segments[i].left = total + 1;
        total += number;
    }
	
    for (i = 1; i <= total / 2; i++)
    {
        if (GetCharacter(i) != GetCharacter(total - i + 1))
            ans++;
    }
    
    std::cout << ans;
    return 0;
}

char GetCharacter(unsigned long long index)
{
    unsigned long long l = 1, r = n, mid = 0;
    while (l < r)
    {
        mid = (l + r) >> 1;
        if (segments[mid].left >= index)
            r = mid;
        else
            l = mid + 1;
    }
    if (segments[l].left > index)
    	return segments[l - 1].c;
    return segments[l].c;
}
