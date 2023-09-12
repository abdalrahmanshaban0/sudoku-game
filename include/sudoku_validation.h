#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

const int n = 9, m = 6;

bool valid6(int x, int y, int sudoku[][m]){
    int val = sudoku[x][y];
    int cnt = 0;
    for(int j = 0; j < m; j++){
        cnt += (sudoku[x][j] == val);
        if(cnt >= 2) return 0;
    }
    cnt = 0;
    for(int i = 0; i < m; i++){
        cnt += (sudoku[i][y] == val);
        if(cnt >= 2) return 0;
    }
    return 1;
}

bool valid9(int x, int y, int sudoku[][n]){
    int val = sudoku[x][y];
    int cnt = 0;
    for(int j = 0; j < n; j++){
        cnt += (sudoku[x][j] == val);
        if(cnt >= 2) return 0;
    }
    cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += (sudoku[i][y] == val);
        if(cnt >= 2) return 0;
    }
    while(x % 3) x--;
    while(y % 3) y--;
    cnt = 0;
    for(int i = x; i <= x+2; i++){
        for(int j = y; j <= y+2; j++){
            cnt += (sudoku[i][j] == val);
            if(cnt >= 2) return 0;
        }
    }
    return 1;
}
