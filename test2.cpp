
#include <map>
    #include <string>
    #include <iostream>
    #include <sstream>

    int main()
    {
        std::istringstream input("I am am am good good");
        std::map<std::string, int> count;
        std::string word;
        decltype(count)::const_iterator most_common;
        while (input >> word)
        {
            auto iterator = count.emplace(word, 0).first;
            ++iterator->second;
            if (count.size() == 1 ||
                iterator->second > most_common->second)
                most_common = iterator;
        }
        std::cout << '\"' << most_common->first << "' repeated "
             << most_common->second << " times\n";
    }
