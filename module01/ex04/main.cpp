/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:37:55 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/13 17:20:13 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

int main(int arc, char **arv) {
    if (arc != 4)
        error();
    std::string buf;
    std::string result;
    std::string infile;
    std::string file = arv[1];
    std::string s1 = arv[2];
    std::string s2 = arv[3];

    if (!file.length() || !s1.length() || !s2.length())
        error();
    std::ifstream readfile(file);
    if (readfile.fail())
        error();
    std::ofstream writefile;
    if (writefile.fail())
        error();
    writefile.open(file + ".replace");
    while (std::getline(readfile, buf)) {
        result.append(buf);
    }
    size_t pos = 0;
    pos = result.find(s1, pos);
    while (pos != std::string::npos) {
        result.erase(pos, s1.length());
        result.insert(pos, s2);
        pos =result.find(s1, pos + s2.length());
    }
    writefile << result << std::endl;
    readfile.close();
    writefile.close();
    return 0;
}