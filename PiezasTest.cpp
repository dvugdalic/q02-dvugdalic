/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};
TEST(PiezasTest, blankBoard)
{
	board Board;
	ASSERT_TRUE(blank);
}
TEST(PiezasTest, whosTurn)
{
	board Board;
	int result = board.whosTurn(X);
	ASSERT_EQ = (result, X);
}
TEST(PiezasTest, resetBoard)
{
	board Board;
	int result = board.resetBoard;
	ASSERT_EQ = (true);
}
TEST(PiezasTest, gameState)
{
	board Board;
	int result = board.gameState;
	ASSERT_EQ = (result, board);	
TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
