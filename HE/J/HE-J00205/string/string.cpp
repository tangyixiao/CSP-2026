#include <bits/stdc++.h>
using namespace std;
long long n,a,L = 0,answer = 0;
char c;
string huiwen = "";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
    	cin >> a >> c;
    	L += a;
    	if(L > 300000000)
	    {
		    cout << 0;
		    return 0;
	    }
    	for(int j = 1;j <= a;j++)
    	{
    		huiwen += c;
		}
	}
	long long left = 0,right = L - 1;
	while(left < right)
	{
		if(huiwen[left] != huiwen[right])
		{
			answer++;
		}
		left++;
		right--;
	}
	cout<< answer;
	return 0;
} 
