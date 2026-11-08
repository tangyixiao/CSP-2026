#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//cout << "=-----0-----=";
	long long n , _s=1 ;
	cin >> n ;
	char s[1000005] /*i cant get 1e9 chars , i very sad QwQ*/,char_x;
	long long num_x;
	//cout << "=-----1-----=";
	for (int i = 1 ; i <=n ; i++)
	{
		//cout << "=-----2-----=";
		cin >> num_x ;
		//cout << "=-----3-----=";
		cin >> char_x ;
		//cout << "=-----4-----=";
		for(int j = 1 ; j <=num_x ; j++)
		{
			s[_s] = char_x ;	
			_s++;
			
		}
	}
	_s--;
	long long num = 0 ;
	if(_s % 2 == 0)
	{
		
		for (int i = 1 ; i <= _s/2 ; i++)
		{
			
			if (s[i] != s[_s+1-i])
				num += 1 ;
				
			
		}
			
	}
	else
	{
		for (int i = 1 ; i <= (_s-1)/2 ; i++)
		{
		if (s[i] != s[_s+1-i])
				num += 1 ;	
		}
			
	}
	cout << num ;
	
	//testing
	/*for(int i = 1 ; i <= _s ; i++)
		cout << s[i];
	cout << _s ;*/
	return 0 ;
}//my code seems wrong ,icant ak this question
