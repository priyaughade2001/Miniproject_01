#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
/* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void gotoxy(void) {
  TEST_ASSERT_EQUAL(coord.X=x;
    coord.Y=y;);
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("GOTOXY function fail");
}

void SetColor(void) {
  TEST_ASSERT_EQUAL(wColor);
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("wColor is failed");
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}
//UUTime tests

TEST(UUTime, TestTimeConstructor1)
{
	std::cout << "\nRunning test TestConstructor 1" << std::endl;

	//Arrange
	int expected_result{10};
	int actual_result {0};
		

	//ACT
	UUTime newTime{};
	actual_result = newTime.GetHours();


	//Assert
	ASSERT_EQ(expected_result, actual_result);

	if (!HasFailure()) {
		//Test has passed
		currentPoints += 1; //add points
		std::cout << "Test UUTime constructor PASSED! : The default UUTime constructor sets the time correctly" << std::endl;

	}
	else if (HasFailure()) {
		//Test failed - provide feedback
		std::cout << "Test UUTime constructor FAILED! : The default UUTime constructor doesn't set the time correctly " << std::endl;
	}
	std::cout << "Current MARKS for asssignment 2: " << currentPoints << "/" << maxPoints << "\n" << std::endl;
}
