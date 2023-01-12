/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcaoparatestes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:53:20 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/01/12 17:03:16 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program for the above approach

#include <stdarg.h>
#include <stdio.h>

// Variadic function to add numbers
int AddNumbers(int n, ...)
{
	int Sum = 0;

	// Declaring pointer to the
	// argument list
	va_list ptr;

	// Initializing argument to the
	// list pointer
	va_start(ptr, n);

	for (int i = 0; i < n; i++)

		// Accessing current variable
		// and pointing to next one
		Sum += va_arg(ptr, int);

	// Ending argument list traversal
	va_end(ptr);

	return Sum;
}

// Driver Code
int main()
{
	printf("\n\n Variadic functions: \n");

	// Variable number of arguments
	printf("\n 1 + 2 = %d ",
		AddNumbers(2, 1, 2));

	printf("\n 3 + 4 + 5 = %d ",
		AddNumbers(3, 3, 4, 5));

	printf("\n 6 + 7 + 8 + 9 = %d ",
		AddNumbers(4, 6, 7, 8, 9));

	printf("\n");

	return 0;
}

