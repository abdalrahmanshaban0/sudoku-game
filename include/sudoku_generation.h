#include "sudoku_validation.h"

void generate9()
{
    int sudoku9[n][n];
    int cnt = 81 - 35;
    memset(sudoku9, 0, sizeof(sudoku9));
    srand(time(0));
    for(int i = 0; i < cnt; i++){
        int r1 = rand() % 9, r2 = rand() % 9;
        int x, y;

        while(sudoku9[r1][r2]){
            r1 = rand() % 9;
            r2 = rand() % 9;
        }

        x = r1, y = r2;
        for(int j = 1; j <= 9; j++){
            sudoku9[x][y] = j;
            if(valid9(x, y, sudoku9)){
                break;
            }
            sudoku9[x][y] = 0;
        }
    }

    for(int i = 0 ;i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", sudoku9[i][j]);
        }
        printf("%c", '\n');
    }
}

void generate6(){
    int sudoku6[m][m];
    int cnt = 36 - 18;
    memset(sudoku6, 0, sizeof(sudoku6));
    srand(time(0));
    for(int i = 0; i < cnt; i++){
        int r1 = rand() % 6, r2 = rand() % 6;
        int x, y;

        while(sudoku6[r1][r2]){
            r1 = rand() % 6;
            r2 = rand() % 6;
        }

        x = r1, y = r2;
        for(int j = 1; j <= 6; j++){
            sudoku6[x][y] = j;
            if(valid6(x, y, sudoku6)){
                break;
            }
            sudoku6[x][y] = 0;
        }
    }

    for(int i = 0 ;i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", sudoku6[i][j]);
        }
        printf("%c", '\n');
    }
}
