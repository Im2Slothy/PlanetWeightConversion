#include <stdio.h>

int main() {

double weight;
int x;

printf("Please enter your current earth weight: ");
scanf("%lf", &weight);

printf("Choose from the following planets:\n \t1.Mercury\t2. Venus\t3. Mars\t4. Jupiter\t5. Saturn\t6 Uranus\t7. Neptune\n\n");

printf("Which planet are you visting? ");
scanf("%d", &x);

if (x == 1) {
  weight = weight * 0.38; // Mercury
} else if (x == 2) {
  weight = weight * 0.91; // Venus
} else if (x == 3) {
  weight = weight * 0.38; // Mars
} else if (x == 4) {
  weight = weight * 2.34; // Jupiter
} else if (x == 5) {
  weight = weight * 1.06; // Saturn 
} else if (x == 6) {
  weight = weight * 0.92; // Uranus
} else if (x == 7) {
  weight = weight * 1.19; // Neptune
}

printf("\nYour weight: %lf\n", weight);

}
