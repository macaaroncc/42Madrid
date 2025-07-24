
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacasado <aacasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:30:16 by aacasado          #+#    #+#             */
/*   Updated: 2025/07/17 11:30:17 by aacasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n);
           {
              unsigned int i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }
