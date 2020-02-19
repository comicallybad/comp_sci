class Solve
{
private:
#define UNASSIGNED 0
#define N 9

public:
    bool FindUnassignedLocation(int grid[N][N], int &row, int &col);
    bool isSafe(int grid[N][N], int row, int col, int num);
    bool SolveSudoku(int grid[N][N]);
    bool UsedInRow(int grid[N][N], int row, int num);
    bool UsedInCol(int grid[N][N], int col, int num);
    bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num);
    void printGrid(int grid[N][N]);
};