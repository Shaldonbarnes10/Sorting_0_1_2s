# Sorting an Array of 0s, 1s, and 2s using the Three-Pointer Approach

## Overview
This repository implements an efficient algorithm to sort an array consisting of only `0`s, `1`s, and `2`s. The algorithm follows the **Dutch National Flag Algorithm**, which uses three pointers to partition the array in a single pass, ensuring an optimal time complexity of **O(n)**.

## Problem Statement
Given an array consisting only of the numbers `0`, `1`, and `2`, sort it in ascending order **in-place** without using any extra space.

### Example
#### **Input:**
```
arr[] = {0, 1, 2, 1, 2, 1, 2}
```

#### **Output:**
```
0 1 1 1 2 2 2
```

## Approach: Three-Pointer Technique
We use three pointers:
1. **Low Pointer (`low`)**: Marks the boundary where `0`s should be placed.
2. **Mid Pointer (`mid`)**: Iterates through the array, processing elements.
3. **High Pointer (`high`)**: Marks the boundary where `2`s should be placed.

### **Algorithm Steps:**
1. Initialize three pointers:
   - `low = 0` (beginning of array)
   - `mid = 0` (current element being processed)
   - `high = n - 1` (end of array)

2. Traverse the array while `mid <= high`:
   - **If `arr[mid] == 0`**:
     - Swap `arr[mid]` and `arr[low]`
     - Increment `low` and `mid`
   
   - **If `arr[mid] == 1`**:
     - Leave as is, simply increment `mid`
   
   - **If `arr[mid] == 2`**:
     - Swap `arr[mid]` and `arr[high]`
     - Decrement `high` (do not increment `mid` immediately, as swapped value needs processing)

### **Code Implementation (C++)**
```cpp
#include <iostream>
#include <array>
using namespace std;

void sort012(array<int, 7>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    array<int, 7> arr = {0, 1, 2, 1, 2, 1, 2};
    sort012(arr);
    
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
```

### **Time Complexity Analysis**
- **Best Case:** O(n)
- **Worst Case:** O(n)
- **Average Case:** O(n)

### **Space Complexity**
- **O(1)** (Sorting is performed in-place without extra space)

## Why Use the Three-Pointer Approach?
✅ **Single pass (O(n) complexity)** – Efficient for large datasets.  
✅ **In-place sorting (O(1) space)** – No extra memory required.  
✅ **Easy to implement and understand.**  

## Conclusion
This algorithm is one of the most efficient ways to sort an array of `0`s, `1`s, and `2`s, ensuring optimal performance. The three-pointer approach minimizes swaps and avoids unnecessary operations, making it an excellent choice for real-world scenarios.

---
### **Contributions**
Feel free to fork this repository, suggest improvements, or report any issues!

---
**Author:** Shaldon Barnes  
**License:** MIT
