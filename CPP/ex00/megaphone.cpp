/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maquetn <maquetn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:46:50 by maquetn           #+#    #+#             */
/*   Updated: 2024/02/05 13:00:14 by maquetn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char* argv[]) {
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; ++i) {
        // Convert to string
        std::string arg = argv[i];

        for (size_t j = 0; j < arg.length(); ++j) {
            arg[j] = std::toupper(arg[j]);
        }

        std::cout << arg;
        if (i != argc - 1)
            std::cout << " ";
    }

    std::cout << std::endl;
    return 0;
}
