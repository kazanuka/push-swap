#include "push_swap.h"
int main(int argc, char **argv)
{
    t_list **a;
    t_list **b;
    
    
    a = (t_list **)malloc(sizeof(t_list *));
	b = (t_list **)malloc(sizeof(t_list *));
    if (!a || !b)
        return (1);
    *a = NULL;
    *b = NULL;
    check_args(argc,argv);
    init_a(a,argc,argv);
    if(is_sorted(*a))//SORTED ERRORA BAK
    {
        liberte(a);
        liberte(b);
        return(0);
    } 
    sort(a,b);
    liberte(a);
    liberte(b);
}