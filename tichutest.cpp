// Author: Harry <harry@housy.ch>

#include <gtest/gtest.h>
#include "./card.h"

// Check correctness of shufle function on a few examples
TEST(tichutest, KoenigSchwarz){
 ASSERT_EQ(13, KoenigSchwarz.worth);
}

//Main program runs all tests.
int main() {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TEST();
} 
