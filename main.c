/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:36:03 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/24 13:01:07 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
int main(int argc, char **argv)
{
    // 1. Validar argumentos (son números?)
    // 2. Detectar duplicados
    // 3. Crear estructura t_stack
    // 4. Inicializar stacks con los números
    // 5. Llamar al algoritmo de ordenamiento
    // 6. Liberar memoria
    t_stack *stack;
    int     size;

    // ... parseo de argumentos y validación ...

    // Inicializar estructura
    stack = ft_init_stack(argv, argc);
    if (!stack)
        return (1);

    size = argc - 1;
    // ✅ USAR ESTA LÓGICA:
    if (is_sorted(stack->stacka))
    {
        // Ya está ordenado, no hacer nada
    }
    else if (size <= 5)
    {
        simple(&stack);      // 3-5 números
    }
    else if (size <= 100)
    {
        medium(&stack);      // 6-100 números
    }
    else
    {
        complex(&stack);     // 100+ números
    }

    // Liberar memoria
    free_stack(&stack);

    return (0);
}
Función is_valid_number(char *str) → verifica que sea número
Función has_duplicates(argv) → detecta duplicados
Función ft_init_stack(argv, argc) → crea la estructura

---
simple:  3-5 números
medium:  6-100 números
complex: 100+ números
---

medium.c - Ordenamiento para 6-100 números
cvoid medium(t_stack **order)
Estrategia típica (Radix o Quick Sort adaptado):
- Divide números en 3 o 4 partes
- Envía números menores a B
- Ordena recursivamente
- Reinseerta en orden

complex.c - Ordenamiento para 100+ números
cvoid complex(t_stack **order)
Para el básico: copia la lógica de medium() o usa la misma

PRIORIDAD 3: Polish (Opcional, después)

#include "push_swap.h" // Asegúrate de que este incluya libft.h y structur.h

// Función rápida para crear nodos usando TU ft_lstnew
t_list	*create_node(int n)
{
	return (ft_lstnew(n));
}

// Función para imprimir tus stacks con TU estructura
void	print_status(t_stack *stack)
{
	t_list	*a = stack->stacka;
	t_list	*b = stack->stackb;

	printf("\n[ STACK A ]: ");
	while (a)
	{
		printf("%d ", a->num);
		a = a->next;
	}
	printf("\n[ STACK B ]: ");
	while (b)
	{
		printf("%d ", b->num);
		b = b->next;
	}
	printf("\n--------------------------\n");
}

int	main(void)
{
	t_stack	*stack;

	// 1. Inicializamos la estructura principal
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (1);
	stack->stacka = NULL;
	stack->stackb = NULL;
	
	// Inicializamos el bench por si tus funciones de movimiento lo usan
	stack->calc = ft_calloc(1, sizeof(t_bench));

	// 2. Creamos el Stack A manualmente para probar el "simple"
	// Ejemplo: 5, 1, 4, 2, 3
	ft_lstadd_back(&stack->stacka, ft_lstnew(5));
	ft_lstadd_back(&stack->stacka, ft_lstnew(1));
	ft_lstadd_back(&stack->stacka, ft_lstnew(4));
	ft_lstadd_back(&stack->stacka, ft_lstnew(2));
	ft_lstadd_back(&stack->stacka, ft_lstnew(3));

	printf("ESTADO INICIAL:");
	print_status(stack);

	// 3. Ejecutamos tu algoritmo simple
	simple(&stack);

	printf("ESTADO FINAL (Ordenado):");
	print_status(stack);

	// 4. Limpieza básica (opcional para el test)
	// ft_lstclear(&stack->stacka);
	// free(stack->calc);
	// free(stack);

	return (0);
}*/
