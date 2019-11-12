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
    bool test1();
    /**
    * @brief After adding an item, isEmpty returns false.
    */
    bool test2();
    /**
    * @brief enqueue two items, items are in order.
    */
    bool test3();
    /**
    * @brief dequeue runtime_errors if queue is empty.
    */
    bool test4();
    /**
    * @brief enqueue once, dequeue once, isEmpty returns true.
    */
    bool test5();
    /**
    * @brief enqueue once, dequeue twice, error thrown.
    */
    bool test6();
    /**
    * @brief enqueue twice, dequeue once, isEmpty returns false.
    */
    bool test7();
    /**
    * @brief enqueue twice, dequeue once, correct item in queue still.
    */
    bool test8();
    /**
    * @brief peekFront runtime_errors if queue is empty.
    */
    bool test9();
    /**
    * @brief peekFront returns correct value after one enqueue.
    */
    bool test10();
    /**
    * @brief enqueue a list of nums, correct peekFront.
    */
    bool test11();
    /**
    * @brief enqueue a list of nums, correct peekFront after a set amount of dequeues.
    */
    bool test12();

  private:

};
#endif
