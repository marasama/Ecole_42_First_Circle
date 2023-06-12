/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:05:03 by adurusoy          #+#    #+#             */
/*   Updated: 2023/06/11 23:40:50 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

int ft_strlen(char *b)
{
	int		a;

	a = 0;
	while (b[a])
		a++;
	return (a);
}

char *plate(char *piece, char *cake, int count, int *needmore)
{
	char	*newpiece;
	int		a;
	int		b;

	b = ft_strlen(piece);
	a = 0;
	newpiece = (char *)malloc(sizeof(char) * ((*needmore + 1) * BUFFER_SIZE) + 1);
	if(!newpiece)
		return (NULL);
	while(a < b)
		newpiece[a] = piece[a++];
	b = 0;
	while(cake[b] != '\0' || cake[b] != '\n')
		newpiece[a++] = cake[b++];
	newpiece[a] = '\0';
	free(piece);
}

char *get_next_line(int fd)
{
	static char	*cake;
	char		*piece;
	int			check;
	int			count;
	int			needmore;

	cake = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	needmore = 0;
	piece = NULL;
	while (1)
	{
		count = 0;
		check = read(fd, cake, BUFFER_SIZE);
		cake[check] = '\0';
		if (check == -1 || !cake || check == 0)
			return (NULL);
		while (cake[count] != '\n' || cake[count] != '\0')
			count++;
		piece = plate(piece, cake, count, &needmore);
		if (count > BUFFER_SIZE)
			return (piece);
	}
}
