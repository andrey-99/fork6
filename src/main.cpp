// Copyright 2022 NNTU-CS
#include <iostream>
#include "tpqueue.h"

struct SYM {
  char ch;
  int prioritet;
};
int main() {
    TPQueue<SYM> pqueue;
    pqueue.push(SYM{'a', 4});
    pqueue.push(SYM{'b', 7});
    SYM c1 = pqueue.pop();
    SYM c2 = pqueue.pop();
    return 0;
  TPQueue<SYM> pqueue;
  pqueue.push(SYM{'a', 4});
  pqueue.push(SYM{'b', 7});
  pqueue.push(SYM{'c', 2});
  SYM c1 = pqueue.pop();
  SYM c2 = pqueue.pop();
  SYM c3 = pqueue.pop();
  std::cout << c1.ch << " " << c1.prioritet << '\n';
  std::cout << c2.ch << " " << c2.prioritet << '\n';
  std::cout << c3.ch << " " << c3.prioritet << '\n';
  return 0;
}
