/*
** EPITECH PROJECT, 2021
** test_pushswap
** File description:
** test_pushswap
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

/* Test linked_list_lib */

Test(init_list, init_ll_and_display_it, .init = redirect_all_std)
{
    int argc = 5;
    char *argv[6] = {"./pushswap", "3", "2", "1", "4"};

    node_t *l_a = init_list(argc, argv);
    print_list(l_a);
    free_list(l_a);
    cr_assert_stdout_eq_str("3 2 1 4 \n");
}

/* Test_before_sort */

Test(already_sorted, test_if_args_are_already_sorted)
{
    int argc = 5;
    char *argv[6] = {"./pushswap", "3", "2", "1", "4"};

    node_t *l_a = init_list(argc, argv);
    cr_assert_eq(is_list_sorted(l_a), 0);
    free_list(l_a);
}

Test(already_sorted, test_if_args_are_already_sorted2)
{
    int argc = 5;
    char *argv[6] = {"./pushswap", "1", "2", "3", "4"};

    node_t *l_a = init_list(argc, argv);
    cr_assert_eq(is_list_sorted(l_a), 1);
    free_list(l_a);
}

Test(already_sorted, test_if_args_are_already_sorted3)
{
    int argc = 5;
    char *argv[6] = {"./pushswap", "1", "2", "4", "4"};

    node_t *l_a = init_list(argc, argv);
    cr_assert_eq(is_list_sorted(l_a), 1);
}

Test(check_error, test_not_enough_args)
{
    int argc = 1;
    char *argv[1] = {"./pushswap"};

    cr_assert_eq(check_error(argc, argv), 1);
}

/* Test Pushswap */

Test(pushswap, test_one_number, .init = redirect_all_std)
{
    int argc = 2;
    char *argv[2] = {"./pushswap", "1789"};

    pushswap(argc, argv);
    cr_assert_stdout_eq_str("\n");
}

Test(pushswap, tests_args_already_sorted, .init = redirect_all_std)
{
    int argc = 7;
    char *argv[7] = {"./pushswap", "1", "2", "3", "4", "5", "6"};

    pushswap(argc, argv);
    cr_assert_stdout_eq_str("\n");
}

Test(pushswap, basic_pushswap_test, .init = redirect_all_std)
{
    int argc = 7;
    char *argv[7] = {"./pushswap", "3", "2", "1", "1", "5", "6"};

    pushswap(argc, argv);
    cr_assert_stdout_eq_str("sa pb sa pb sa pb pb pb pa pa pa pa pa sa pb sa pb pb pa pa pa pb pb pa pa\n");
}
