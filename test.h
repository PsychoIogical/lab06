/**
* @file test.h
* @author Dalton Yoder
* @date 2019.11.12
*/

#ifndef TEST_
#define TEST_

#include <iostream>
#include <stexcept>

#include "Queue.h"

class Test {
  public:
    /////////////////////////////
    //  Constructor/Deconstructor
    /////////////////////////////
    Test(Queue q);
    ~Test();
    /////////////////////////////
    //  Test Functions
    /////////////////////////////
    /**
     * @brief Runs all tests.
     */
    runTests();
    

  private:
    Queue testQueue;

};
#endif
