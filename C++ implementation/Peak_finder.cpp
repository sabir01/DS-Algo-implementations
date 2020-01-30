#include <bits/stdc++.h>
using namespace std;

#define spc " "
#define nl "\n"

const int ROW = 10;
const int COL = 10;

void init_array(int arr[][COL], int row, int col);
void printArray(int arr[][COL], int row, int col);
void find_peak(int arr[][COL], int row, int col);
int main()
{
    int arr[ROW][COL];
    init_array(arr, ROW, COL);

    printArray(arr, ROW, COL);

    find_peak(arr, ROW, COL);
}

void init_array(int arr[][COL], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            arr[i][j] = rand();
        }
    }
}
void printArray(int arr[][COL], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << spc;
        }
        cout << nl;
    }
}
void find_peak(int arr[][COL], int row, int col)
{

}
