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
    int result = board_func("d1-d5", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(Rook_Move, Incor) {
    int result = board_func("b1-b3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}


int main(int argc, const char** argv)
{   _board();
    return ctest_main(argc, argv);
}
