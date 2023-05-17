#include "ft_list.h"

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int rec = 0;

    if (begin_list)
    {
        while(begin_list->next)
        {
            rec++;
            begin_list = begin_list->next;
        }
    }
    return (rec);
}