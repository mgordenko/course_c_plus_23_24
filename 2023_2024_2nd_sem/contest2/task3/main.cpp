//
// Created by Майя Кораблина on 08/02/24.
//

#include "iostream"
int counting_stars(int x, int y, char **matrix){
    int stars = 0;
    int arr[8][2] = {{x+1, y+1}, {x-1,y-1}, {x, y+1}, {x+1, y}, {x-1, y}, {x, y-1}, {x+1, y-1}, {x-1, y+1}};

    for (int* i : arr) {
        if (matrix[i[0]][i[1]] == '*') {
            stars += 1;
        }
    }
    return stars;
}

void print_matrix(char **matrix, int rows, int cols){
    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < cols - 1; j++) std::cout << matrix[i][j] << ' ';
        std::cout << '\n';
    }
}


int main() {
    int rows, cols, num_mines;
    int x, y;
    int mines;
    std::cin >> rows >> cols >> num_mines;
    rows += 2, cols += 2;

    char **matrix = new char*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new char[cols];
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = '0';
        }
    }

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) matrix[i][j] = '0';

    for (int _ = 1; _ <= num_mines; _++) {
        std::cin >> x >> y;
        matrix[x][y] = '*';
    }

    for (int i = 1; i < rows - 1; i++){
        for (int j = 1; j < cols - 1; j++) {
            if (matrix[i][j] == '*') {
                continue;
            }
            matrix[i][j] = '0' + counting_stars(i, j, matrix);

        }
    }

    print_matrix(matrix, rows, cols);

    return 0;
}