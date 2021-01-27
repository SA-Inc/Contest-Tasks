bool shared_bits(long a, long b) {
  int c = a & b;
  int ones = 0;

  while (c) {
    ones += c & 1;
    c >>= 1;
  }

  return ones >= 2 ? true : false;
}
