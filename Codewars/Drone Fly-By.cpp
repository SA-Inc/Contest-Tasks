// https://www.codewars.com/kata/58356a94f8358058f30004b5

std::string flyBy(std::string lamp, std::string drone){
  for (int i = 0; i < drone.size(); i++) {
//     if (drone[i] == '=' || drone[i] == 'T') {
    if (lamp[i] == 'x') {
      lamp[i] = 'o';
    }
//     std::cout << lamp[i] << " " << drone[i] << std::endl;
  }
  
  return lamp;
}
