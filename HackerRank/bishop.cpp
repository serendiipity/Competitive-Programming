#include <bits/stdc++.h>
using namespace std; 

typedef pair <int, int> pair;

// pairs of possible moves 
vector <pair> possible_moves = {{-1, 2}, {-1, -2}, {1, -2}, {1, 2}, {-2, -1}, {-2, 1}, {2, 1}, {2, -1}};

int min_moves[128][128] = {0};
bool captured = false;

// if knight gets bishop, all previous moves can be done safely; didn't take this into consideration; "reset"

bool is_safe(int n, int r, int c, int end_row, int end_col, int bishop_row, int bishop_col) {
    // check position against borders
    if (r < 0 || r >= n || c < 0 || c >= n)
        return false;

    // check if knight is/can be captured
    if ((r == bishop_row && c == bishop_col) || captured) {
        captured = true;
        return true;
    }

    // check if the move will put the knight on the bishop's way
    if (abs(r - c) == abs(bishop_row - bishop_col) || r + c == bishop_row + bishop_col)
        return false;

    return true;
}


int moves(int n, int start_row, int start_col, int end_row, int end_col, int bishop_row, int bishop_col) {
    if (start_col == end_col && start_row == end_row)
        return 0;

    // if position was previously visited return
    // min moves to get to it 
    if (moves[start_row][start_col] != 0)
        return moves[start_row][start_col];

    for (auto m: possible_moves) {
        int r = start_row + m.first;
        int c = start_col + m.second;
        if (is_safe(n, r, c, end_row, end_col, bishop_row, bishop_col))
            return min_moves = moves(n, r, c, end_row, end_col, bishop_row, bishop_col) + 1;
    }

    return -1;
}

int main(void) {
    int n; cin >> n; 
    int start_row, end_col; cin >> end_row >> end_col;
    int end_row, end_col; cin >> end_row >> end_col;
    cout << moves(n, start_row, start_col, end_row, end_col, bishop_row, bishop_col) << endl;

    return 0;
}