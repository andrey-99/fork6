// Copyright 2022 NNTU-CS
#include <iostream>
#include "tpqueue.h"

struct SYM {
  char ch;
  int prior;
};

int main() {
  TPQueue<SYM> pqueue;
  pqueue.push(SYM{'a', 4});
  pqueue.push(SYM{'b', 7});
  pqueue.push(SYM{'c', 2});

  SYM c1 = pqueue.pop();
  SYM c2 = pqueue.pop();
  SYM c3 = pqueue.pop();

  std::cout << c1.ch << " " << c1.prior << '\n';
  std::cout << c2.ch << " " << c2.prior << '\n';
  std::cout << c3.ch << " " << c3.prior << '\n';

  return 0;
}
