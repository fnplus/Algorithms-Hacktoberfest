#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int m=10;
int board[10][10];

void printSolution(int board[][10], int N) 
{ 
    for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
} 

bool is_attacked(int x,int y,int board[][10], int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==x || j==y || (i+j)==(x+y)||(i-j)==(x-y)){
                if(board[i][j]==1)
                    return true;
            }
        }
    }
    return false;
}

bool N_queens(int board[][m], int row , int N){
    if(row==N)
        return true;
    for(int i=0;i<N;i++){
        for(int  j=0;j<N;j++){
            if(is_attacked(i,j,board,N)){
                continue;
            }   
            board[i][j]=1;
            if(N_queens(board,row+1,N)){
                return true;
            }   
            board[i][j]=0;
                
        }
    }
    return false;
}

int main(){
    int N;
    cin >> N;
    
    
    for(int i=0;i<=N;i++)
        for(int j=0;j<=N;j++)
            board[i][j]=0;
    
     
    
    if(N_queens(board,0,N)){
        cout << "YES" << "\n";
        printSolution(board,N);
    }
    else
        cout << "NO";
      
    return 0; 
    
} 
