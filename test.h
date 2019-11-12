/**
* @file test.h
* @author Dalton Yoder
* @date 2019.11.12
*/

#ifndef TEST_
#define TEST_

#include <iostream>
#include <stdexcept>

#include "Queue.h"

class Test {
  public:
    /////////////////////////////
    //  Constructor/Deconstructor
    /////////////////////////////
    Test();
    ~Test();
    /////////////////////////////
    //  Test Functions
    /////////////////////////////
    /**
     * @brief Runs all tests.
     */
    void runTests();
    /**
     * @param isPassed True if test passed
     * @brief Prints Passed or Failed
     */
    void printPassFail(bool isPassed);

    /**
    * @brief isEmpty returns true on empty.
    */
    void test1();
    /**
    * @brief After adding an item, isEmpty returns false.
    */
    void test2();
    /**
    * @brief enqueue two items, items are in order.
    */
    void test3();
    /**
    * @brief dequeue runtime_errors if queue is empty.
    */
    void test4();
    /**
    * @brief enqueue once, dequeue once, isEmpty returns true.
    */
    void test5();
    /**
    * @brief enqueue once, dequeue twice, error thrown.
    */
    void test6();
    /**
    * @brief enqueue twice, dequeue once, isEmpty returns false.
    */
    void test7();
    /**
    * @brief enqueue twice, dequeue once, correct item in queue still.
    */
    void test8();
    /**
    * @brief peekFront runtime_errors if queue is empty.
    */
    void test9();
    /**
    * @brief peekFront returns correct value after one enqueue.
    */
    void test10();
    /**
    * @brief enqueue a list of nums, correct peekFront.
    */
    void test11();
    /**
    * @brief enqueue a list of nums, correct peekFront after a set amount of dequeues.
    */
    void test12();
    /**
    * @brief List given is held correctly in queue.
    */
    void test13();

  private:

};
#endif
