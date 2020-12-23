// https://www.codewars.com/kata/5bb0c58f484fcd170700063d

long pillars(int num_of_pillars, int distance, int width) {
  return num_of_pillars > 1 ? (num_of_pillars - 1) * distance * 100 + (num_of_pillars - 2) * width : 0;
}
