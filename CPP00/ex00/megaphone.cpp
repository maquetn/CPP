/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:46:50 by maquetn           #+#    #+#             */
/*   Updated: 2024/02/19 13:29:49 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char* argv[]) {
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];

        for (size_t j = 0; j < arg.length(); ++j) {
            arg[j] = std::toupper(arg[j]);
        }
        std::cout << arg;
    }
    return 0;
}
