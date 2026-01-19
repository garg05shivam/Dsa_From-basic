#include <iostream>
using namespace std;

int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int small = nums[0];
    int large = nums[0];
    int smallIndex = 0;
    int largeIndex = 0;

    for(int i = 0; i < size; i++) {
        // smallest
        if(nums[i] < small) {
            small = nums[i];
            smallIndex = i;
        }

        // largest
        if(nums[i] > large) {
            large = nums[i];
            largeIndex = i;
        }
    }

    cout << "Smallest value: " << small << " at index " << smallIndex << endl;
    cout << "Largest value: " << large << " at index " << largeIndex << endl;

    return 0;
}
