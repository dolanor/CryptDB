/*
 * TestNotConsider.h
 *
 */

#include <edb/EDBProxy.h>
#include <test/test_utils.h>

#ifndef TESTNOTCONSIDER_H_
#define TESTNOTCONSIDER_H_

class TestNotConsider {
 public:
    TestNotConsider();
    ~TestNotConsider();

    static void run (const TestConfig &tc, int argc, char ** argv);
};

#endif /* TESTNOTCONSIDER_H_ */
            