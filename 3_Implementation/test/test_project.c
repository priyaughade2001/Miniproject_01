#include "unity.h"

void setUp(void) { };
void tearDown(void) { };

int main(void) 
{
    UnityBegin(NULL);

    UnityDefaultTestRun(, "", 10);

    return (UnityEnd());

}