#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int board[100];

int ship1[] = {1, 1, 1, 1, 1};
int ship2[] = {1, 1, 1, 1};
int ship3[] = {1, 1, 1};
int ship4[] = {1, 1};
int ship5[] = {1, 1};

char orientation[] = {'h', 'v'};

int maxRow, maxCol;

int x, y, position;

bool isEmpty;

int main()
{
    srand (time(NULL));
    for(int i = 0; i < 100; ++i)
    {
        board[i] = 0;
    }

    for(int i = 0; i < 5; ++i)
    {
        int orientation = rand() % 2 + 1; // 1 for horizontal, 2 for vertical
        if(orientation == 1)
        {
            if(i == 0)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxCol = 5;
                    x = rand() % (maxCol + 1);
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % 9 + 0;
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 1] == 0 && board[position + 2] == 0 && board[position + 3] == 0 && board[position + 4] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 1] = 1;
                        board[position + 2] = 1;
                        board[position + 3] = 1;
                        board[position + 4] = 1;
                        isEmpty = false;
                    }
                }
            } else if(i == 1)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxCol = 6;
                    x = rand() % (maxCol + 1);
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % 9 + 0;
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 1] == 0 && board[position + 2] == 0 && board[position + 3] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 1] = 1;
                        board[position + 2] = 1;
                        board[position + 3] = 1;
                        isEmpty = false;
                    }
                }
            }else if(i == 2)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxCol = 7;
                    x = rand() % (maxCol + 1);
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % 9 + 0;
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 1] == 0 && board[position + 2] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 1] = 1;
                        board[position + 2] = 1;
                        isEmpty = false;
                    }
                }
            }else if(i == 3)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxCol = 8;
                    x = rand() % (maxCol + 1);
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % 9 + 0;
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 1] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 1] = 1;
                        isEmpty = false;
                    }
                }
            }else if(i == 4)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxCol = 8;
                    x = rand() % (maxCol + 1);
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % 9 + 0;
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 1] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 1] = 1;
                        isEmpty = false;
                    }
                }
            }
        }
        if(orientation == 2)
        {
            if(i == 0)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxRow = 5;
                    x = rand() % 9 + 0;
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % (maxRow + 1);
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 10] == 0 && board[position + 20] == 0 && board[position + 30] == 0 && board[position + 40] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 10] = 1;
                        board[position + 20] = 1;
                        board[position + 30] = 1;
                        board[position + 40] = 1;
                        isEmpty = false;
                    }
                }
            } else if(i == 1)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxRow = 6;
                    x = rand() % 9 + 0;
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % (maxRow + 1);
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 10] == 0 && board[position + 20] == 0 && board[position + 30] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 10] = 1;
                        board[position + 20] = 1;
                        board[position + 30] = 1;
                        isEmpty = false;
                    }
                }
            }else if(i == 2)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxRow = 7;
                    x = rand() % 9 + 0;
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % (maxRow + 1);
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 10] == 0 && board[position + 20] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 10] = 1;
                        board[position + 20] = 1;
                        isEmpty = false;
                    }
                }
            }else if(i == 3)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxRow = 8;
                    x = rand() % 9 + 0;
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % (maxRow + 1);
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 10] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 10] = 1;
                        isEmpty = false;
                    }
                }
            }else if(i == 4)
            {
                isEmpty = true;
                while(isEmpty == true)
                {
                    maxRow = 8;
                    x = rand() % 9 + 0;
                    // cout << "x = " << x << endl;
                    position = x;
                    // cout << "position x = " << position << endl;
                    y = rand() % (maxRow + 1);
                    // cout << "y = " << y << endl;
                    position += y * 10;
                    if(board[position] == 0 && board[position + 10] == 0)
                    {
                        // cout << "ship "<< i << " position = " << position << endl;
                        board[position] = 1;
                        board[position + 10] = 1;
                        isEmpty = false;
                    }
                }
            }
        }
    }
    for(int i = 0; i < 100; ++i)
    {
        if(i%10){
            cout << board[i];
        } else {
            cout << endl << board[i];
        }
        
    }
    return 0;
}