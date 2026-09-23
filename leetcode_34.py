class Solution:
    def searchRange(self, nums: list[int], target: int) -> list[int]:
        low = 0
        high = len(nums) - 1
        lower_bound = -1

        while low <= high:
            mid = (low + high) // 2
            if nums[mid] == target:
                lower_bound = mid
                high = mid - 1
            elif nums[mid] > target:
                high = mid - 1
            elif nums[mid] < target:
                low = mid + 1

        low = 0
        high = len(nums) - 1
        upper_bound = -1
        while low <= high:
            mid = (low + high) // 2
            if nums[mid] == target:
                upper_bound = mid
                low = mid + 1
            elif nums[mid] > target:
                high = mid - 1
            elif nums[mid] < target:
                low = mid + 1
        return [lower_bound,upper_bound]
