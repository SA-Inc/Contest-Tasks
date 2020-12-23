// https://www.codewars.com/kata/5dd5128f16eced000e4c42ba

char solve(std::string s){
    std::map<char, std::pair<int, int>> indexes;
    std::map<char, int> differences;

    for (int i = 0; i < s.size(); i++) {
        char l = std::tolower(s[i]);

        if (!indexes.count(l)) {
            indexes[l] = std::make_pair(i, i);
        } else {
            indexes[l].second = i;
        }
    }

    for (std::map<char, std::pair<int, int>>::iterator it = indexes.begin(); it != indexes.end(); ++it) {
        differences[it->first] = it->second.second - it->second.first;
    }

    for (std::map<char, int>::iterator it = differences.begin(); it != differences.end(); ++it) {
        std::cout << it->first << " => " << it->second << '\n';
    }

    auto x = std::max_element(differences.begin(), differences.end(), [](const std::pair<char, int>& p1, const std::pair<char, int>& p2) {
        return p1.second < p2.second && p1.first < p2.first; 
    });

    return x->first;
}
