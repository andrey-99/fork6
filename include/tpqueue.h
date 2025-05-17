// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
#include <stdexcept>

template <typename T>
class TPQueue {
 private:
  struct Node {
    T data;
    Node* next;
    explicit Node(const T& d) : data(d), next(nullptr) {}
  };
  Node* head;
  Node* tail;
 public:
  TPQueue() : head(nullptr), tail(nullptr) {}
  ~TPQueue() {
    while (!isEmpty()) {
      pop();
    }
  }
  void push(const T& value) {
    Node* newNode = new Node(value);

    if (!head) {
      head = tail = newNode;
      return;
    }
    if (value.prioritet > head->data.prioritet) {
      newNode->next = head;
      head = newNode;
      return;
    }
    Node* current = head;
    while (current->next && current->next->data.prioritet >= value.prioritet) {
      current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    if (!newNode->next) {
      tail = newNode;
    }
  }
  T pop() {
    if (!head) throw std::out_of_range("Queue is empty");
    Node* temp = head;
    T result = head->data;
    head = head->next;
    delete temp;
    if (!head) tail = nullptr;
    return result;
  }
  const T& front() const {
    if (!head) throw std::out_of_range("Queue is empty");
    return head->data;
  }
}
struct SYM {
  bool isEmpty() const {
    return head == nullptr;
  }
};


#endif  // INCLUDE_TPQUEUE_H_
