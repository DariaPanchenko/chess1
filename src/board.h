#ifndef __BOARD_H__
    #define __BOARD_H__

    #define RESET "\033[0m"
    #define GREEN "\033[1;32m"
    #define RED   "\033[1;31m"
    #define CYAN  "\033[1;36m"
    #define GRAY  "\033[2m"
    #define YELLOW "\033[0;33m"
    #define MAGENTA "\033[0;35m"

    void print_new_board();
    int board_func(char *places, int test);
    void print_board();
    char **_board();
#endif
