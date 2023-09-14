#include "sudoku_validation.h"

bool rec6(int r, int c, int sudoku6[][m]){
    if(r == 6) return 1;
    if(c == 6) return rec6(r+1, 0, sudoku6);
    if(sudoku6[r][c]) return rec6(r, c+1, sudoku6);

    for(int ch = 1; ch <= 6; ch++){
        sudoku6[r][c] = ch;
        if(valid6(r, c, sudoku6)){
            if(rec6(r, c+1, sudoku6)) return 1;
        }
        sudoku6[r][c] = 0;
    }
    return 0;
}

bool rec9(int r, int c, int sudoku9[][n]){
    if(r == 9) return 1;
    if(c == 9) return rec9(r+1, 0, sudoku9);
    if(sudoku9[r][c]) return rec9(r, c+1, sudoku9);

    for(int ch = 1; ch <= 9; ch++){
        sudoku9[r][c] = ch;
        if(valid9(r, c, sudoku9)){
            if(rec9(r, c+1, sudoku9)) return 1;
        }
        sudoku9[r][c] = 0;
    }
    return 0;
}

void generate6(){
    int sudoku6[m][m];
    int cnt = 36 - 22;
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

    int temp[6][6];
    for(int i = 0 ;i < 6; i++){
        for(int j = 0 ;j < 6; j++){
            temp[i][j] = sudoku6[i][j];
        }
    }

    if(!rec6(0,0, temp)){
        generate6();
    }

    for(int i = 0 ;i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", sudoku6[i][j]);
        }
        printf("%c", '\n');
    }
}

void generate9()
{
    int sudoku9[n][n];
    int cnt = 81 - 55;
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

   int temp[9][9];
    for(int i = 0 ;i < 9; i++){
        for(int j = 0 ;j < 9; j++){
            temp[i][j] = sudoku9[i][j];
        }
    }

    if(!rec9(0,0, temp)){
        generate9();
    }

    for(int i = 0 ;i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", sudoku9[i][j]);
        }
        printf("%c", '\n');
    }
}
