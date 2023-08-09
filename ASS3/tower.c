#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        // If there's only one disk, move it directly from the source to the destination
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary using destination as the auxiliary peg
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from the auxiliary to the destination using source as the auxiliary peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;

    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    // Call the recursive function to solve the Tower of Hanoi problem
    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
