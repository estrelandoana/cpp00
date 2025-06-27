/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:03:09 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/26 21:43:02 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int  main(int argc, char **argv)
{
	int	i;
	int	j;
	
  if (argc == 1)
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  }
  else
  {
    for (i = 1; i < argc; i++)
			{
				for (j = 0; argv[i][j] != '\0'; j++)
					std::cout << (char) std::toupper(argv[i][j]);
				std::cout << " ";
			}	
  }
	std::cout << std::endl;
	return (0);
}
