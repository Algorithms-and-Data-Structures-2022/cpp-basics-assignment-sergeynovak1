#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left - right) * (left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0) {
      return false;
    } else if ((mask & (1 << bit_pos)) == 0) {
      return false;
    } else {
      return true;
    }
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int t = middle;
    if (right > middle) {
      t = right;
    }
    if (left > t) {
      t = left;
    }
    return t;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr and right != nullptr) {
      int pl = *left;
      int pr = *right;
      *right = pl;
      *left = pr;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int sum = 0;
    if (arr != nullptr) {
      if (length > 0) {
        for (int i = 0; i < length; i++) {
          sum += arr[i];
        }
      }
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr != nullptr and length > 0) {
      int max = *arr;
      int maxi = 0;
      for (int i = 0; i < length; i++) {
        if (max < *(arr + i)) {
          max = *(arr + i);
          maxi = i;
        }
      }
      return arr + maxi;
    } else {
      return nullptr;
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {
      int *arr = new int[length];
      for (int i = 0; i < length; i++) {
        arr[i] = init_value;
      }
      return arr;
    } else {
      return nullptr;
    }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in != nullptr and length > 0) {
      int *arr = new int[length];
      for (int i = 0; i < length; i++) {
        arr[i] = arr_in[i];
      }
      return arr;
    } else {
      return nullptr;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
      return;
    }
    if (length <= 0) {
      os << "Invalid argument: length\n";
      return;
    }
    if (k <= 0) {
      os << "Invalid argument: k\n";
      return;
    }
    if (k >= length) {
      os << arr[0] << "\t";
      return;
    }
    os << arr[0] << "\t";
    int m = k;
    while (k < length) {
      os << arr[k] << "\t";
      k += m;
    }
    return;
  }
}