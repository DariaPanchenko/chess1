#define CTEST_MAIN

#include <board.h>
#include <check_strokes.h>
#include <ctest.h>

CTEST(Data, Cor_Data) {
	int result = board_func("a2-a4",1);
	int expected = 0;
	ASSERT_EQUAL(expected,result);
}

CTEST(Data, Incor_Data) {
	int result = board_func("kf2-f3",1);
	int expected =-1;
	ASSERT_EQUAL(expected,result);
}

CTEST(P_Move, Cor) {
    int result = board_func("f2-f3", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(P_Move, Incor) {
    int result = board_func("f2-f3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

CTEST(Rook_Move, Cor) {
    int result = board_func("a1-a5", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(Rook_Move, Incor) {
    int result = board_func("a1-c4", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

CTEST(Knight_Move, Cor) {
    int result = board_func("b1-c3", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(Knight_Move, Incor) {
    int result = board_func("b1-b3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

CTEST(Bishop_Move, Cor) {
    int result = board_func("c1-a3", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(Bishop_Move, Incor) {
    int result = board_func("c1-g3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

CTEST(Queen_Move, Cor) {
    int result = board_func("d1-d5", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(Queen_Move, Inco) {
    int result = board_func("d1-e4", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

CTEST(King_Move, Cor) {
    board_func("e2-e4", 1);
    int result = board_func("e1-e2", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(King_Move, Incor) {
    int result = board_func("e1-g3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

int main(int argc, const char** argv)
{   _board();
    return ctest_main(argc, argv);
}
