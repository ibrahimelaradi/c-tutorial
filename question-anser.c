double salary(int d, int n) {
  double a, b;

  if (d >= 1 && d <= 5) {
    a = 645;
    b = 25;
    if (n > 10) {
      n = 10;
    }
  } else if (d == 6) {
    a = 712;
    b = 34;
    if (n > 10) {
      n = 10;
    }
  } else if (d == 7) {
    a = 800;
    b = 41;
    if (n > 10) {
      n = 10;
    }
  } else if (d == 8) {
    a = 973;
    b = 50;
    if (n > 8) {
      n = 8;
    }
  } else if (d == 9) {
    a = 1090;
    b = 55;
    if (n > 8) {
      n = 8;
    }
  } else if (d >= 10 && d <= 15) {
    a = 1230;
    b = 65;
    if (n > 7) {
      n = 7;
    }
  } else {
    return 0;
  }

  return a + (n * b);
}

int promptInteger(char *message) {
  printf(message);
  int result;
  scanf("%d", &result);
  return result;
}

int main() {
  int d = promptInteger("Enter your employee degree: ");
  int n = promptInteger("Enter the years of experience: ");

  double s = salary(d, n);

  printf("Your salary is %.2f", s);
  return 0;
}