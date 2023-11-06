// Sorts an array using the Heap Sort algorithm.

var sortArray = function (nums) {
  let n = nums.length;

  // Step 1: Build the max heap
  buildMaxHeap(nums);

  // Step 2: Heapify and extract the max element repeatedly
  for (let index = n - 1; index >= 0; index--) {
    // Swap the current max element (at index 0) with the last unsorted element
    swap(nums, 0, index);

    // Re-heapify the remaining elements from the root
    maxHeapify(nums, 0, index - 1);
  }

  return nums;
};

//Builds a max heap from an array.

function buildMaxHeap(nums) {
  let n = nums.length;

  // Start from the last non-leaf node and heapify each node in reverse order
  for (let index = Math.floor(n / 2); index >= 0; index--) {
    maxHeapify(nums, index, n);
  }
}

// Heapifies an element in a max heap.

function maxHeapify(nums, i, n) {
  const left = 2 * i + 1;
  const right = 2 * i + 2;
  let largest = i;

  // Check if left child exists and is greater than the current largest
  if (left <= n && nums[left] > nums[largest]) {
    largest = left;
  }

  // Check if right child exists and is greater than the current largest
  if (right <= n && nums[right] > nums[largest]) {
    largest = right;
  }

  // If the largest value is not the current element, swap them and recursively heapify
  if (largest !== i) {
    swap(nums, i, largest);
    maxHeapify(nums, largest, n);
  }
}

// Swaps two elements in an array.

function swap(nums, i, j) {
  const temp = nums[i];
  nums[i] = nums[j];
  nums[j] = temp;
}
