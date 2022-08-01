#include <string>
#include <iostream>
#include "options.h"
#include "skiplist.h"

using Skiplist = skiplist_t<std::string, std::string>;

void test(){
    wopt_t opt;
    Skiplist sk(8, 4);
    sk.put(opt, "u", "85");
    sk.put(opt, "c", "3");
    sk.put(opt, "d", "4");
    sk.put(opt, "i", "8");
    sk.put(opt, "e", "5");
    sk.put(opt, "f", "6");
    sk.put(opt, "y", "98");
    sk.put(opt, "z", "198");
    sk.put(opt, "x", "89");
    sk.put(opt, "k", "9");
    sk.put(opt, "e", "5");
    sk.put(opt, "f", "6");
    sk.put(opt, "y", "98");
    sk.put(opt, "k", "9");
    sk.put(opt, "b", "2");
    sk.put(opt, "y", "98");
    sk.put(opt, "z", "198");
    sk.put(opt, "x", "89");
    sk.put(opt, "k", "9");
    sk.put(opt, "b", "2");
    sk.put(opt, "y", "98");
    sk.put(opt, "z", "198");
    sk.put(opt, "x", "89");
    sk.put(opt, "k", "9");
    sk.put(opt, "p", "18");
    sk.put(opt, "q", "81");
    sk.put(opt, "g", "7");
    sk.put(opt, "h", "8");
    sk.put(opt, "j", "8");
    sk.put(opt, "k", "8");
    sk.put(opt, "a", "1");
    sk.put(opt, "v", "87");
    sk.put(opt, "w", "88");
    sk.put(opt, "r", "82");
    sk.put(opt, "s", "83");
    sk.put(opt, "t", "84");
    sk.put(opt, "m", "10");
    sk.put(opt, "n", "11");
    sk.put(opt, "o", "12");
    sk.print();

    ropt_t ropt;
    std::string val;
    int err = sk.get(ropt, "e", val);
    if (err==-1) {
        std::cout << " not foud " << std::endl;
        return;
    }
    std::cout << "found, e: " << val << std::endl;
}

int main(){
    test();
    return 0;
}
