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
    if(is_sorted(*a))//SORTED ERRORA BAK
    {
        liberte(a);
        liberte(b);
        error(SORTED_ERR);
    }
    printf("%d\n",(*a)->nbr);
    printf("%d\n",(*a)->next->nbr);
    printf("%d\n",(*a)->next->next->nbr);
    sort(a,b);
    liberte(a);
    liberte(b); 
}