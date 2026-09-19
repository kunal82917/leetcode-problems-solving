int cmp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

int threeSumClosest(int* nums, int numssize, int target) {
    qsort(nums, numssize, sizeof(int), cmp);

    int closest = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < numssize - 2; i++) {
        int left = i + 1;
        int right = numssize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (abs(target - sum) < abs(target - closest)) {
                closest = sum;
            }

            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                return sum;
            }
        }
    }

    return closest;
}
