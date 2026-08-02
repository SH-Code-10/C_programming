#include <stdio.h>

// 1. Define the structure
struct BOOK {
    char Name[100];
    float price;
};

// 2. Function to find and display the record with maximum price
// The entire array of structures is passed here
void maxPriceg(struct BOOK b[]) {
    int maxIndex = 0;
    
    for (int i = 1; i < 10; i++) {
        if (b[i].price > b[maxIndex].price) {
            maxIndex = i;
        }
    }

    printf("\n--- Book with Maximum Price ---\n");
    printf("Name: %s\n", b[maxIndex].Name);
    printf("Price: %.2f\n", b[maxIndex].price);
}

int main() {
    struct BOOK b[10];

    // 3. Input 10 records
    printf("Enter details for 10 books:\n");
    for (int i = 0; i < 10; i++) {
        printf("Book %d Name: ", i + 1);
        // Using %[^\n] to allow spaces in book names
        scanf(" %[^\n]s", b[i].Name); 
        printf("Book %d Price: ", i + 1);
        scanf("%f", &b[i].price);
    }

    // 4. Pass the entire structure array to the function
    maxPriceg(b);

    return 0;
}
