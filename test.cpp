/**
* @file test.cpp
* @author Dalton Yoder
* @date 2019.11.12
*/

#include "test.h"

Test::Test() {}

Test::~Test() {}

void Test::runTests() {
  std::cout<<"Running test suite...\n------------------------------------------------\n"
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
  std::cout<<"------------------------------------------------\nTests concluded. Goodbye...\n";
}

void Test::printPassFail(bool isPassed) {
  if(isPassed) { std::cout<<"PASSED";}
  else { std::cout<<"FAILED";}
}

//@brief isEmpty returns true on empty.
bool Test::test1() {
  Queue q;
  bool passed = (q.isEmpty());
  std::cout<<"Test 1: isEmpty() returns true when empty -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief After adding an item, isEmpty returns false.
bool Test::test2() {
  Queue q;
  q.enqueue(1);
  bool passed = !(q.isEmpty());
  std::cout<<"Test 2: After adding an item, isEmpty() returns false -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue two items, items are in order.
bool Test::test3() {
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
bool Test::test4() {
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
bool Test::test5() {
  Queue q;
  q.enqueue(1);
  q.dequeue();
  bool passed = q.isEmpty();
  std::cout<<"Test 5: Enqueues once, dequeues once, isEmpty returns true -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue once, dequeue twice, error thrown.
bool Test::test6() {
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
bool Test::test7() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.dequeue();
  bool passed = !(p.isEmpty());
  std::cout<<"Test 7: Enqueues twice, dequeues once, isEmpty() returns false -> ";
  printPassFail(passed);
  std::cout<<"\n";
}

//@brief enqueue twice, dequeue once, correct item in queue still.
bool Test::test8() {
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
bool Test::test9() {

}

//@brief enqueue a list of nums, correct peekFront.
bool Test::test10() {

}

//@brief enqueue a list of nums, correct peekFront after a set amount of dequeues.
bool Test::test11() {

}
