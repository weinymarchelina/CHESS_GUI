#include "Board.h"

/*
Board::Board()
{
    // Iterates through the board
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = nullptr;	// Set the board to NULL
        }
    }

    lastMovedPiece = nullptr;
}

Board::~Board()
{
    // Iterates through the board
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            delete board[i][j];	// Delete the board
        }
    }

    delete lastMovedPiece;
}

Piece* Board::getPieceAt(Position pos)
{
    return board[pos.y][pos.x];
}

void Board::setPieceAt(const Position& position, Piece* piece)
{
    // Set the piece at the specified position
    board[position.y][position.x] = piece;
}


void Board::capturePiece(Piece* piece, vector<Piece>& enemyPiece)
{
    // Find the position of the captured piece
    Position position = piece->position;

    // Remove the piece from the board by setting the position to nullptr
    setPieceAt(position, nullptr);

    // Find the piece in the vector
    auto it = find(enemyPiece.begin(), enemyPiece.end(), piece);
    if (it != enemyPiece.end())
    {
        // Remove the piece from the vector
        enemyPiece.erase(it);
    }
}


*/
