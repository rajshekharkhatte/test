#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/ATM/Bank.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/Bank.cxx");

class TestSuite_Bank_cxx_c5f47588 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_Bank_cxx_c5f47588);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST(test_Bank_1);
        CPPTEST_TEST(test_addAccount_1);
        CPPTEST_TEST(test_getAccount_1);
        CPPTEST_TEST(test_getAccount_10);
        CPPTEST_TEST(test_getAccount_2);
        CPPTEST_TEST(test_getAccount_3);
        CPPTEST_TEST(test_getAccount_4);
        CPPTEST_TEST(test_getAccount_5);
        CPPTEST_TEST(test_getAccount_6);
        CPPTEST_TEST(test_getAccount_7);
        CPPTEST_TEST(test_getAccount_8);
        CPPTEST_TEST(test_getAccount_9);
        CPPTEST_TEST(test_x7eBank_1);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_Bank_1();
        void test_addAccount_1();
        void test_getAccount_1();
        void test_getAccount_10();
        void test_getAccount_2();
        void test_getAccount_3();
        void test_getAccount_4();
        void test_getAccount_5();
        void test_getAccount_6();
        void test_getAccount_7();
        void test_getAccount_8();
        void test_getAccount_9();
        void test_x7eBank_1();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Bank_cxx_c5f47588);

void TestSuite_Bank_cxx_c5f47588::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_Bank_cxx_c5f47588::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_Bank_cxx_c5f47588::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_Bank_cxx_c5f47588::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_Bank_1 */
/* CPPTEST_TEST_CASE_CONTEXT Bank::Bank(void) */
void TestSuite_Bank_cxx_c5f47588::test_Bank_1()
{
    /* Pre-condition initialization */
    /* Testing constructor. */
    ::Bank _return;
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.myCurrentAccountNumber", ( _return.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_Bank_1 */

/* CPPTEST_TEST_CASE_BEGIN test_addAccount_1 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::addAccount(void) */
void TestSuite_Bank_cxx_c5f47588::test_addAccount_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.addAccount();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_addAccount_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_1 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = 0;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_10 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = 1;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_10 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_2 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_2 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_3 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_3 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_4 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = 1;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_4 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_5 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = 0;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "Hello world";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_5 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_6 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "Hello world";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_6 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_7 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = 1;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "Hello world";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_7 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_8 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = 0;
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_8 */

/* CPPTEST_TEST_CASE_BEGIN test_getAccount_9 */
/* CPPTEST_TEST_CASE_CONTEXT Account * Bank::getAccount(int, std::string) */
void TestSuite_Bank_cxx_c5f47588::test_getAccount_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Initializing argument 1 (num) */ 
    int _num  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (password) */ 
    ::std::string _password  = "A very long string that is supposed to contain more than 256 characters in length..................................................................................................................................................................................";
    /* Tested function call */
    ::Account * _return  = _cpptest_TestObject.getAccount(_num, _password);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_PTR("Account * _return ", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.myCurrentAccountNumber", ( _cpptest_TestObject.myCurrentAccountNumber ));
}
/* CPPTEST_TEST_CASE_END test_getAccount_9 */

/* CPPTEST_TEST_CASE_BEGIN test_x7eBank_1 */
/* CPPTEST_TEST_CASE_CONTEXT Bank::~Bank(void) */
void TestSuite_Bank_cxx_c5f47588::test_x7eBank_1()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Bank _cpptest_TestObject ;
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7eBank_1 */
