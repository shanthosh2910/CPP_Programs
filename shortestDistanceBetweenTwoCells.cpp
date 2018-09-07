// Given a matrix of N*M order. Find the shortest distance from a source cell to a destination cell, traversing through limited cells only.
// Also you can move only up, down, left and right. If found output the distance else -1.
// Constraints:
// s represents ‘source’
// d represents ‘destination’
// * represents cell you can travel
// 0 represents cell you can not travel

// Input:
// {'0', '*', '0', 's'},
// {'*', '0', '*', '*'},
// {'0', '*', '*', '*'},
// {'d', '*', '*', '*'}
// Output:
// 6

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define N 4
#define M 4
class Qitem
{
  public:
    int row, column, distance;
    Qitem(int x, int y, int z)
    {
        row = x;
        column = y;
        distance = z;
    }
};

int shortestPath(char matrix[N][M])
{
    Qitem source(0, 0, 0);
    bool visited[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matrix[i][j] == '0')
                visited[i][j] = true;
            else
                visited[i][j] = false;
            if (matrix[i][j] == 's')
            {
                source.row = i;
                source.column = j;
            }
        }
    }

    queue<Qitem> q;
    q.push(source);
    visited[source.row][source.column] = true;

    while (!q.empty())
    {
        Qitem p = q.front();
        q.pop();

        if (matrix[p.row][p.column] == 'd')
            return p.distance;
        // moving up
        if (p.row - 1 >= 0 && visited[p.row - 1][p.column] == false)
        {
            q.push(Qitem(p.row - 1, p.column, p.distance + 1));
            visited[p.row - 1][p.column] = true;
        }

        // moving down
        if (p.row + 1 < N && visited[p.row + 1][p.column] == false)
        {
            q.push(Qitem(p.row + 1, p.column, p.distance + 1));
            visited[p.row + 1][p.column] = true;
        }

        // moving left
        if (p.column - 1 >= 0 && visited[p.row][p.column - 1] == false)
        {
            q.push(Qitem(p.row, p.column - 1, p.distance + 1));
            visited[p.row][p.column - 1] = true;
        }

        // moving right
        if (p.column + 1 < M && visited[p.row][p.column + 1] == false)
        {
            q.push(Qitem(p.row, p.column + 1, p.distance + 1));
            visited[p.row][p.column + 1] = true;
        }
    }
    return -1;
}

int main()
{
    char matrix[N][M] = {{'0', '*', '0', 's'},
                         {'*', '0', '*', '*'},
                         {'0', '*', '*', '*'},
                         {'d', '*', '*', '*'}};

    cout << shortestPath(matrix);
    return 0;
}