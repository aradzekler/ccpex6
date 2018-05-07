#pragma once
#include <iostream>
#include "Value.hpp"
#include "IllegalCoordinateException.hpp"
#include "IllegalCharException.hpp"
using namespace std;

class Board
{
  public:
    Value **board;
    int size;
    Board();
    Board(int boardSize);
    Board(const Board &);
    ~Board();
    const int getSize();
    //Value getValue(int row, int col);
    Value &operator[](Coordinates);
    Board &operator=(const Board &);
    Board &operator=(char c);
    friend ostream &operator<<(ostream &out, Board &b);
};
