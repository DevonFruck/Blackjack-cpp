#ifndef CARD_H
#define CARD_H

class Card {

  std::string suit;
  std::string face;
  int value;

  public:
    Card();
    Card(std::string newSuit, std::string newFace, int newValue);
    int getValue();
    std::string getFace();
    std::string getSuit();

};

#endif
