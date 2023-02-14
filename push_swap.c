/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:12:31 by msodor            #+#    #+#             */
/*   Updated: 2023/02/14 19:33:56 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_list *temp;

	temp = stack->top;
	while (temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
	printf("a\n\n");
}

// int main(int ac, char **av)
// {
// 	t_stacks stack;
// 	t_list *head = list_args(av);
// 	if (check_args(av))
// 		error();
// 	if (ac == 1 || is_sorted(av) )
// 		exit(0);
// 	stack.a = create_stack();
// 	fill_stack(head, stack.a);
// 	stack.b = create_stack();
// 	print_stack(stack.a);
// 	sx('a', &stack);
// 	print_stack(stack.a);

// }

int main(int ac, char **av)
{
	t_stacks *stacks = NULL;
	t_list *head = list_args(av);
	if (check_args(av))
		error();
	if (ac == 1 || is_sorted(head) )
		exit(0);
	stacks = malloc(sizeof(t_stacks));
	if (stacks == NULL)
		exit(0);
	stacks->a = create_stack();
	fill_stack(head, stacks->a);
	print_stack(stacks->a);
	// if (ft_lstsize(stacks->a->top) == 4)
		sort_five(stacks);
	print_stack(stacks->a);
	print_stack(stacks->b);
	
}
