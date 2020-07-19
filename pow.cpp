int pow(int a, int b) {
  if(b > 1) return a * pow(a, b - 1);
  if(b == 1 || b == 0) {
    return a * b + 1 - b;
  }
  return -1;
}
