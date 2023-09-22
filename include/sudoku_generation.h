#include "sudoku_validation.h"

//idea of code that I will generate a valid grid then remove some elements from it

// row , col , sub its just frequency array just to check if can put element in this place in O(1)
bool row[10][10],col[10][10],sub[10][10];
// elements that will be removed from grid
bool removed6[36],removed9[81];
//  getsub is function to get index of square ,from (0,0) to (2,2) is sub[0][element] ,
//  from (0,3) to (2,5) sub[1][element] and so on
int getsub(int i,int j){
    if(i<3){
        return j/3;
    }else if(i<6){
        return 3 + j/3;
    }else return 6 + j/3;
}
// check if it is valid to put val in (r,c) or not in O(1)
bool valid9(int r,int c,int val){
    if(row[r][val] || col[c][val] || sub[getsub(r, c)][val])return false;
    return true;
}

bool rec9(int r, int c, int sudoku9[][9]){
    if(r>=9){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(removed9[i*9+j]){
                    printf("%d ",0);
                }
                else
                    printf("%d ",sudoku9[i][j]);
            }
            printf("\n");
        }
        return true;
    }
    // now we want to place a number in (r,c) and we want our choice to be random
    // ,and we don't want rand() function to choose the same element twice in this recursive call
    // now we get all valid elements to put in (r,c) and put them in pick
    int size = 0;
    int pick[9]={};
    for(int i=1;i<=9;i++){
        if(valid9(r,c,i)){
            pick[size++] = i;
        }
    }
    // now we try to put every valid element in (r,c)
    while(size > 0){
        srand(time(0));
        // idx is the index of chose element by rand()
        int idx = rand() % size;
        // we try to put pick[idx] in (r,c) and add its frequency to row,col,sub
        sudoku9[r][c] = pick[idx];
        row[r][pick[idx]] = col[c][pick[idx]] = sub[getsub(r,c)][pick[idx]] = 1;
        // if we generated a valid grid then we should break by returning true
        if(c+1<9){
            if(rec9(r, c + 1, sudoku9))return true;
        }
        else {
            if(rec9(r + 1, 0, sudoku9))return true;
        }
        //backtracking ..
        row[r][pick[idx]] = col[c][pick[idx]] = sub[getsub(r,c)][pick[idx]] = 0;
        sudoku9[r][c] = 0;
        // now we want to remove pick[idx] from  pick array this done by moving the last element to pick[idx], and make size = size -1
        // in other word's we shifted it to end of the array
        pick[idx] = pick[size - 1];
        size--;
    }
    return false;
}
void generate9() {
    int sudoku9[9][9]={};
    // I will remove ~40 random places from sudoku
    int rem[81];
    for(int i=0;i<81;i++)rem[i] = i;
    int end = 81;
    while(end>40){
        srand(time(0));
        int chose = rem[rand()%end];
        removed9[rem[chose]]=true;
        rem[chose] = rem[end-1];
        end--;
    }
    rec9(0, 0, sudoku9);
}
// same idea like 9*9 but difference in valid that no condition on squares of size 3*3
bool valid6(int r,int c,int tmp){
    if(row[r][tmp] || col[c][tmp])return false;
    return true;
}
bool rec6(int r, int c, int sudoku6[][6]){
    if(r>=6){
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                if(removed6[i*6 + j]){
                    printf("%d ",0);
                }else{
                    printf("%c ",sudoku6[i][j]);
                }
            }
            printf("\n");
        }
        return true;
    }
    int idx =0;
    int pick[6];
    for(int i=1;i<=6;i++){
        if(valid6(r,c,i)){
            pick[idx++] = i;
        }
    }
    while(idx>0){
        srand(time(0));
        int i = rand()%idx;
        int tmp = pick[i];
        sudoku6[r][c] = tmp;
        row[r][tmp] = col[c][tmp] =  true;
        if(c+1<6){
            if(rec6(r, c + 1, sudoku6))return true;
        }
        else {
            if(rec6(r + 1, 0, sudoku6))return true;
        }
        row[r][tmp] = col[c][tmp]  = 0;
        sudoku6[r][c] = 0;
        pick[i] = pick[idx-1];
        idx--;
    }
    return false;
}

void generate6(){
    int sudoku6[6][6]={};
    int rem[36];
    for(int i=0;i<36;i++)rem[i] = i;
    int end = 36;
    while(end>=20){
        srand(time(0));
        int chose = rem[rand()%end];
        removed6[rem[chose]]=true;
        rem[chose] = rem[end-1];
        end--;
    }
    rec6(0,0,sudoku6);
}
