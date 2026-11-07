#include<fstream>
#include<cmath>

int column(char c){
    return c - 'A' + 1;
}

bool side(int col){
    if(col <= 3){
        return true;
    }

    return false;
}

int main(){
    std::fstream file_in("travel.in");
    std::fstream file_out("travel.out");

    int p1_car, p2_car;
    int p1_row, p2_row;

    char p1_column, p2_column;

    file_in>>p1_car>>p1_row>>p1_column>>p2_car>>p2_row>>p2_column;

    bool same_car = (p1_car == p2_car);
    bool same_row = same_car && (p1_row == p2_row);
    
    int p1_col = column(p1_column), p2_col = column(p2_column);

    bool same_side = same_row && (side(p1_col) == side(p2_col));
    bool adjacent = (same_car && same_row && same_side && (std::abs(p1_col - p2_col) == 1));

    file_out<<same_car<<same_row<<same_side<<adjacent;

    return 0;
}