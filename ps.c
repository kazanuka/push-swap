#include "push_swap.h"
int main(int argc, char **argv)
{
    t_list **a;
    t_list **b;
    
    a = NULL;
    b = NULL;
    a = (t_list **)malloc(sizeof(t_list *));
	b = (t_list **)malloc(sizeof(t_list *));
    
    check_args(argc,argv);
    init_a(a,argc,argv);
    printf("%d",is_sorted(*a));
    if(is_sorted(*a))//SORTED ERRORA BAK
    {
        liberte(a);
        liberte(b);
        error(SORTED_ERR);
    }
    sort(a,b);
    liberte(a);
    liberte(b); 
}