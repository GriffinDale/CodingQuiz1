/*#include <catch2/catch_test_macros.hpp>
#include <iostream>

#include "interquartile_range.h"

using namespace std;

// the syntax for defining a test is below. It is important for the name to be unique, but you can group multiple tests with [tags]. A test can have [multiple][tags] using that syntax.
TEST_CASE("Example Test Name - Change me!", "[flag]"){
    // instantiate any class members that you need to test here
    int one = 1;


    // anything that evaluates to false in a REQUIRE block will result in a failing test
    REQUIRE(one == 1); // fix me!


    // all REQUIRE blocks must evaluate to true for the whole test to pass
    REQUIRE(true); // also fix me!
}


TEST_CASE("Test 2", "[flag]"){
    // you can also use "sections" to share setup code between tests, for example:
    int one = 1;


    SECTION("num is 2") {
        int num = one + 1;
        REQUIRE(num == 2);
    };


    SECTION("num is 3") {
        int num = one + 2;
        REQUIRE(num == 3);
    };


    // each section runs the setup code independently to ensure that they don't affect each other
}


// you must write 5 unique, meaningful tests for credit on the testing portion of this quiz!


// the provided tests from edugator are below. Note that you must determine the correct output for the [output_hidden] tests yourself


TEST_CASE("Function: IQR 1", "[given]") {
    std::vector<int> v = {2, 4, 4, 5, 6, 7, 8};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 3.00);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


TEST_CASE("Function: IQR 2", "[given]") {
    std::vector<int> v = {1, 2, 3, 4};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 2.00);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


// uncomment these and put the correct values in the REQUIRE blocks


TEST_CASE("Function: IQR 3", "[output_hidden]") {
    std::vector<int> v = {1, 8, 15, 43, 82, 101, 110, 2456, 55345, 137556};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 2441);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


 TEST_CASE("Function: IQR 4", "[output_hidden]") {
    std::vector<int> v = {2, 4, 4, 5, 6, 7, 8, 9, 10};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 4.5);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


 TEST_CASE("Function: IQR 5", "[output_hidden]") {
    std::vector<int> v = {1, 8, 15, 43, 82, 101, 110, 2456, 55345, 137556, 137576};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 55330);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


 TEST_CASE("Function: Unique IQR 1", "[output_hidden]") {
    std::vector<int> v = {1,1,1,2};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 0.5);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


 TEST_CASE("Function: Unique IQR 2", "[output_hidden]") {
    std::vector<int> v = {4,4,4,4,4,4,4,4,5};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 0.0);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


 TEST_CASE("Function: Unique IQR 3", "[output_hidden]") {
    std::vector<int> v = {1,17,18,9000,9001,9002};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 8984);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
TEST_CASE("Function: Unique IQR 4", "[output_hidden]") {
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 9);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


TEST_CASE("Function: Unique IQR 5", "[output_hidden]") {
    std::vector<int> v = {0,0,0,0,0,0,1,2,3,4};
    Node* head = nullptr;
    for(int i: v)
        head = insertEnd(head, i);


    REQUIRE(interQuartile(head) == 2);
   
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
*/
