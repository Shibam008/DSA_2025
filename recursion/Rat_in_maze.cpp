#include <iostream>
#include <vector>
using namespace std;
/*
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 0}

    if my starting = 0 and destination = 0
    then we will return empty string 
    becoz there will be no valid path.

    T.C = (3)^(n^2)
*/

bool valid(int row, int col, int n)
{
    return (row >= 0 && row < n) && (col >= 0 && col < n);
}

void findPathsCleanCode(vector<vector<int>>&maze, int i, int j, int n, string&path, vector<vector<bool>>&visited, vector<string>&ans)
{
    if(i == n-1 && j == n-1)
    {
        ans.push_back(path);
        return;
    }

    int rows[] = {-1, 1, 0, 0};
    int cols[] = {0, 0, -1, 1};
    char dir[]={'U','D','L','R'}; // string dir = "UDLR";

    visited[i][j] = 1;

    for(int k=0; k<4; k++)
    {
        int row = i + rows[k];
        int col = j + cols[k];
        if(valid(row, col, n) && maze[row][col] && !visited[row][col])
        {
            path.push_back(dir[k]);
            findPathsCleanCode(maze, row, col, n, path, visited, ans);
            path.pop_back();

        }
    }

    visited[i][j] = 0;
}

void findPaths(vector<vector<int>>&maze, int row, int col, int n, string&path, vector<vector<bool>>&visited, vector<string>&ans)
{
    if(row == n-1 && col == n-1)
    {
        ans.push_back(path);
        return;
    }

    visited[row][col] = 1;

    // up
    if(valid(row-1, col, n) && maze[row-1][col] && !visited[row-1][col])
    {
        path.push_back('U');
        findPaths(maze, row-1, col, n, path, visited, ans);
        path.pop_back();
    }

    // down
    if(valid(row+1, col, n) && maze[row+1][col] && !visited[row+1][col])
    {
        path.push_back('D');
        findPaths(maze, row+1, col, n, path, visited, ans);
        path.pop_back();
    }

    // left
    if(valid(row, col-1, n) && maze[row][col-1] && !visited[row][col-1])
    {
        path.push_back('L');
        findPaths(maze, row, col-1, n, path, visited, ans);
        path.pop_back();
    }

    // right
    if(valid(row, col+1, n) && maze[row][col+1] && !visited[row][col+1])
    {
        path.push_back('R');
        findPaths(maze, row, col+1, n, path, visited, ans);
        path.pop_back();
    }

    visited[row][col] = 0;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}
    };
    vector<vector<bool>>visited (maze.size(), vector<bool>(maze.size(), 0));
    vector<string> ans;
    string temp;

    //findPaths(maze, 0, 0, 4, temp, visited, ans);
    findPathsCleanCode(maze, 0, 0, 4, temp, visited, ans);
    for(auto path: ans){
        cout << path << endl;
    }


    return 0;
}