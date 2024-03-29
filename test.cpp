/**
* @file test.cpp
* @author Dalton Yoder
* @date 2019.11.12
*/

#include "test.h"

Test::Test() {}

Test::~Test() {}

void Test::runTests() {
  std::cout<<"Running test suite...\n------------------------------------------------\n";
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  test13();
  std::cout<<"------------------------------------------------\nTests concluded. Goodbye...\n";
}

void Test::printPassFail(bool isPassed) {
  if(isPassed) { std::cout<<"PASSED";}
  else { std::cout<<"FAILED";}
}

//@brief isEmpty returns true on empty.
void Test::test1() {
  Queue q;
  bool passed = (q.isEmpty());
  std::cout<<"Test 1: isEmpty() returns true when empty -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief After adding an item, isEmpty returns false.
void Test::test2() {
  Queue q;
  q.enqueue(1);
  bool passed = !(q.isEmpty());
  std::cout<<"Test 2: After adding an item, isEmpty() returns false -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue two items, items are in order.
void Test::test3() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  bool passed = false;
  if(q.peekFront() == 1) {
    q.dequeue();
    if(q.peekFront() == 2) {
      passed = true;
    }
  }
  std::cout<<"Test 3: Enqueued two items, items are in order -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief dequeue runtime_errors if queue is empty.
void Test::test4() {
  Queue q;
  bool passed = false;
  try {
    q.dequeue();
  } catch (const std::runtime_error& e) {
    passed = true;
  }
  std::cout<<"Test 4: Dequeue sends a runtime error if queue is empty -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue once, dequeue once, isEmpty returns true.
void Test::test5() {
  Queue q;
  q.enqueue(1);
  q.dequeue();
  bool passed = q.isEmpty();
  std::cout<<"Test 5: Enqueues once, dequeues once, isEmpty returns true -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue once, dequeue twice, error thrown.
void Test::test6() {
  Queue q;
  bool passed = false;
  try{
    q.enqueue(1);
    q.dequeue();
    q.dequeue();
  } catch (const std::runtime_error& e) {
    passed = true;
  }
  std::cout<<"Test 6: Enqueues once, dequeues twice, error thrown -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue twice, dequeue once, isEmpty returns false.
void Test::test7() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.dequeue();
  bool passed = !(q.isEmpty());
  std::cout<<"Test 7: Enqueues twice, dequeues once, isEmpty() returns false -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue twice, dequeue once, correct item in queue still.
void Test::test8() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.dequeue();
  bool passed = q.peekFront() == 2;
  std::cout<<"Test 8: Enqueue twice, dequeue once, correct item still in queue -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief peekFront runtime_errors if queue is empty.
void Test::test9() {
  Queue q;
  bool passed = false;
  try {
    q.peekFront();
  } catch (const std::runtime_error& e) {
    passed = true;
  }
  std::cout<<"Test 9: peekFront() runtime_errors if queue is empty -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief peekFront returns correct value after one enqueue.
void Test::test10() {
  Queue q;
  q.enqueue(1);
  bool passed = q.peekFront() == 1;
  std::cout<<"Test 10: peekFront() returns correct value after one enqueue -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue a list of nums, correct peekFront.
void Test::test11() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  bool passed = q.peekFront() == 1;
  std::cout<<"Test 11: Enqueue a list of numbers, peekFront() returns correct value -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue a list of nums, correct peekFront after a set amount of dequeues.
void Test::test12() {
  Queue q;
  for(int i = 1 ; i <= 10 ; i++) { q.enqueue(i); }
  for(int i = 1 ; i < 7 ; i++) { q.dequeue(); }
  bool passed = q.peekFront() == 7;
  std::cout<<"Test 12: Enqueue a list of numbers, correct peekFront() after a set amount of dequeues -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief List given is held correctly in queue.
void Test::test13() {
  Queue q;
  int arr[5];
  bool passed = true;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  for(int i = 0 ; i < 5 ; i++) {
    arr[i] = q.peekFront();
    q.dequeue();
  }
  int j = 0;
  while(j < 5) {
    if(arr[j] != j+1) {
      passed = false;
      break;
    }
  }
  std::cout<<"Test 13: List given to queue is placed correctly -> ";
  printPassFail(passed);
  std::cout<<"\n\tMy list: 1, 2, 3, 4, 5\n"
           <<"\tQueue: ";
  for(int k = 0 ; k < 5 ; k++) {
    std::cout<<arr[k];
    if(k == 4) { std::cout<<"\n"; }
    else { std::cout<<", "; }
  }
}
