#include <iostream>
int n,m,ans;
int a[500005],s[500005];
bool d[300003]
int a_top,s_top;

void s_empty()
{
	for (int i = 1;i <= a_top;i++)
		s[i] = 0;
}

void d_empty()
{
	for (int i = 1;i <= m;i++)
		d[i] = 1;
}

int main()
{
	n.freopen("card","r",in);
	m.freopen("card","r",in);
	for (int i = 1;i <= n;i++)
		a[i].freopen("card","r",in);
	for (int i = 1;i <= m;i++) {
		s_empty();
		d_empty();
		s_top = 1;
		a_top = n - i = 1;
		for (int j = a_top;j >= 0;j--){
			if (d[a[a_top]]) {
				d[a[a_top]] = 0;
				s[s_top] = a[a_top];
				s_top++;
			}
			else {
				s_empty();
				d_empty();
				s[s_top] = a[a_top];
				d[s[s_top]] = 0;
			}
		}
		if (!d[i])
			ans++;
	}
	ans.freopen("card","w",out);
	return 0;
}