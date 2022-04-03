#include "unity.h"
#include <project.c>
#define PROJECT_NAME    "Calendar"

/* unity test framework */
void setUp() {

}
void tearDown() { 

}

/* Start of the application test */
int main()
{
/* Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
/* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void gotoxy(void) {
  TEST_ASSERT_EQUAL(coord.X=x; coord.Y=y;);
  
  /* Error */
  TEST_ASSERT_EQUAL("GOTOXY function fail");
}

void SetColor(void) {
  TEST_ASSERT_EQUAL(wColor);
  
  /* Error */
  TEST_ASSERT_EQUAL("wColor is failed");
}
