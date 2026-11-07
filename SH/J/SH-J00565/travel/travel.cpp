#include <fstream>
#include <string>
#include <algorithm>

std::ifstream fin("travel.in");
std::ofstream fout("travel.out");
int carA, carB;
std::string seatA;
std::string seatB;
int rowA, rowB;
int colA, colB;
bool same_car = 0;
bool same_row = 0;
bool same_side = 0;
bool together = 0;

int main() {
	fin >> carA >> seatA >> carB >> seatB;
	rowA = seatA[0] * 10 + seatA[1];
	rowB = seatB[0] * 10 + seatB[1];
	colA = seatA[2];
	colB = seatB[2];
	if (carA == carB) same_car = 1;
	if (rowA == rowB && same_car == 1) same_row = 1;
	if (((colA <= 'C' && colB <= 'C') || ((colA >= 'D' && colB >= 'D'))) && same_row == 1)
		same_side = 1;
	if (std::abs(colA - colB) == 1 && same_side == 1) together = 1;
	fout << same_car << same_row << same_side << together; 
};
