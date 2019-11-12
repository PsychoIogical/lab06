/**
* @file test.cpp
* @author Dalton Yoder
* @date 2019.11.12
*/

#include "test.h"

Test::Test(Queue q) {
  testQueue = q;
}

Test::~Test() {}

void runTests() {

}
//@brief isEmpty returns true on empty.
bool Test::test1() {

}

//@brief After adding an item, isEmpty returns false.
bool Test::test2() {

}

//@brief enqueue two items, items are in order.
bool Test::test3() {

}

//@brief dequeue runtime_errors if queue is empty.
bool Test::test4() {

}

//@brief enqueue once, dequeue once, isEmpty returns true.
bool Test::test5() {

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
