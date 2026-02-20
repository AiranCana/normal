/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:36:03 by raqroca-          #+#    #+#             */
/*   Updated: 2026/02/20 13:11:47 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
    /*
    stack = ft_init_stack(argv, argc);
    if (!stack)
        return (1);

    size = argc - 1;
    */
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


/*
Función is_valid_number(char *str) → verifica que sea número
Función has_duplicates(argv) → detecta duplicados
Función ft_init_stack(argv, argc) → crea la estructura


---
simple:  3-5 números
medium:  6-100 números
complex: 100+ números
---
PRIORIDAD 2: Algoritmos
3️⃣ simple.c - Ordenamiento para 3-5 números
cvoid sort_three(t_stack **stack)  // Max 2 movimientos
void sort_five(t_stack **stack)   // Max 12 movimientos
void simple(t_stack **order)      // Elige cuál usar
Lógica para 3 números:
[1,2,3] → ya ordenado, 0 movimientos
[1,3,2] → sa → [3,1,2]... espera, necesito pensar mejor
[2,1,3] → sa → [1,2,3], 1 movimiento ✓
[2,3,1] → ra → [3,1,2]... necesito 2 movimientos

4️⃣ medium.c - Ordenamiento para 6-100 números
cvoid medium(t_stack **order)
Estrategia típica (Radix o Quick Sort adaptado):
- Divide números en 3 o 4 partes
- Envía números menores a B
- Ordena recursivamente
- Reinseerta en orden

5️⃣ complex.c - Ordenamiento para 100+ números
cvoid complex(t_stack **order)
Para el básico: copia la lógica de medium() o usa la misma

PRIORIDAD 3: Polish (Opcional, después)
*/