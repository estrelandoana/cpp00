/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:03:09 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/26 21:03:02 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int  main(int argc, char **argv)
{
	int	i;
	int	j;
	
  if (argc == 1)
  {
    cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  }
  else
  {
    for (i = 1; i < argc; i++)
			{
				for (j = 0; argv[i][j] != '\0'; j++)
					cout << (char) toupper(argv[i][j]);
				cout << " ";
			}	
  }
	cout << endl;
	return (0);
}
