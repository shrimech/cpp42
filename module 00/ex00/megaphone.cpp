/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 03:03:10 by shrimech          #+#    #+#             */
/*   Updated: 2025/06/18 03:20:36 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int ac,char **av){
    if (ac >= 2) {
        for(int i = 1 ;av[i]; i++) {
            for(int j = 0 ; av[i][j] ; j++) {
                if (i != 1 && j == 0)
                    std::cout << ' ';
                std::cout << (char) toupper(av[i][j]) ;
            }
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl ;
}