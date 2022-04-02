
#include "unity.h"

int currentPoints = 0;
int maxPoints = 100;

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
