# include <cstdio>
# include <cstdlib>

char c1[10], s1[10], c2[10], s2[10];

int turn(char ch) {
	if ('A' <= ch && ch <= 'C')
		return 1;
	else
		return 2;
}

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	scanf("%s", c1 + 1);
	scanf("%s", s1 + 1);
	scanf("%s", c2 + 1);
	scanf("%s", s2 + 1);

	if (c1[1] != c2[1] || c1[2] != c2[2])
		printf("0000\n");
	else if (s1[1] != s2[1] || s1[2] != s2[2])
		printf("1000\n");
	else if (turn(s1[3]) != turn(s2[3]))
		printf("1100\n");
	else if (abs(int(s1[3] - s2[3])) > 1)
		printf("1110\n");
	else
		printf("1111\n");

	fclose(stdin);
	fclose(stdout);

	return 0;

}
