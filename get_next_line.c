/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcefalo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 17:24:41 by gcefalo           #+#    #+#             */
/*   Updated: 2021/01/16 17:48:01 by gcefalo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char		*s[255];
	int				ret;
	char			buffer[BUFFER_SIZE];

//faccio i controlli sugli input per dare output -1


/* loop: (s[fd] non contiene \n)
 * leggo BUFFER_SIZE dal file_descriptor e metto in buffer
 * unisco s[fd] e buffer
 */


/* copio s[fd] in *line fino al primo \n
 * copio s[fd] in tmp dal primo \n in poi
 * libero s[fd]
 * s[fd] = tmp
 */
}
