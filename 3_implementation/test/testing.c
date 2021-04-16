#include "inc.h"
#include "unity.h"
#include<string.h>

#include "unity_internals.h"
#include "unity.c"

/**
 * @brief required by unit test framework
 * 
 */
void setUp()
{
}
/**
 * @brief required by unit test framework
 * 
 */
void tearDown()
{
}






/**
 * @brief test function to test the structure members
 * 
 */




int main()
{
    /**
     * @brief Initiazse the test
     */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}
