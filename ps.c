#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack **a;
    t_stack **b;

    a = (t_stack **)malloc(sizeof(t_stack *));
	b = (t_stack **)malloc(sizeof(t_stack *));
    a = NULL;
    b = NULL;
    check_args(argc,argv);
    init_a(a,argc,argv);
    if(is_sorted(a))
    {
        liberte(a);
        liberte(b);
        error(SORTED_ERR);
    }
    sort(a,b);
    liberte(a);
    liberte(b);
}