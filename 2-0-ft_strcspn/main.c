/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuntoji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:19:14 by skuntoji          #+#    #+#             */
/*   Updated: 2018/09/29 15:22:35 by skuntoji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 
 
size_t ft_strcspn(const char *s, const char *cs);
int main() 
{ 
  
    int size; 
 	int ft_size;

    // initializing strings 
    char str1[] = "geeksforgeeks"; 
    char str2[] = "kfc"; 
  
    // using strcspn() to calculate initial chars 
    // before 1st matching chars. 
    // returns 3 
    size = strcspn(str1, str2); 
	ft_size = ft_strcspn(str1, str2);
  
    printf("The unmatched characters before first matched character :  %d\n", size); 
    printf("The unmatched characters before first matched character for ft_strcspn :  %d\n", ft_size); 
	return (0);
}
