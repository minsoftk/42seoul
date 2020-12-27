/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:12:56 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/27 20:12:56 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*memset(void *dest, int value, size_t count)
{
    size_t i;
    char *temp = (char *)dest;

    i = 0;
    while (i < count)
    {
        temp[i++] = value;        
        //char* 로 캐스팅을 해준다 void형이기 때문에
    }
    return temp;
}