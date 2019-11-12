/**
* @file test.cpp
* @author Dalton Yoder
* @date 2019.11.12
*/

#include "test.h"

Test::Test() {}

Test::~Test() {}

void Test::runTests() {
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
  } catch (const std::except& e) {
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

}

//@brief enqueue twice, dequeue once, isEmpty returns false.
bool Test::test7() {

}

//@brief enqueue twice, dequeue once, correct item in queue still.
bool Test::test8() {

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
