#ifndef PIECE_H
#define PIECE_H

#include "position.h"

/*
class Piece : public QObject {
    Q_OBJECT

public:
    Piece();
    virtual ~Piece();
    bool inRange(Position);
    virtual QVector<Position> getPossibleMove(Board&);
    virtual bool move(const Position&, Board&, QVector<Piece>&, QVector<Piece>&);

private:
    QString color;
    Position position;
    QPixmap icon;
    bool moved;
};
*/

#endif // PIECE_H
